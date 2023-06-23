// Array of structures ques1 - parse the string and initialize an array of structures.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(const char *inputString, struct Student *students, int numStudents) {
    const char *delimiters = " ";
    char *token;
    int count = 0;

    token = strtok(inputString, delimiters);
    while (token != NULL && count < numStudents) {
        students[count].rollno = atoi(token);

        token = strtok(NULL, delimiters);
        if (token != NULL) {
            strcpy(students[count].name, token);

            token = strtok(NULL, delimiters);
            if (token != NULL) {
                students[count].marks = atof(token);

                token = strtok(NULL, delimiters);
            }
        }

        count++;
    }
}

int main() {
    char inputString[100];
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    fflush(stdin); // Clear the input buffer

    printf("Enter the student details in the format 'rollno name marks':\n");
    fgets(inputString, sizeof(inputString), stdin);
    inputString[strcspn(inputString, "\n")] = '\0'; // Remove the trailing newline character

    struct Student *students = (struct Student *)malloc(numStudents * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    initializeStudents(inputString, students, numStudents);

    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
