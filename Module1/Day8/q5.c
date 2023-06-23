//Array of structures ques5- search operation on the array of structures based on name of the student

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void searchStudentByName(const struct Student *students, int numStudents, const char *name) {
    int found = 0;

    for (int i = 0; i < numStudents; i++) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll No: %d\n", students[i].rollno);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Student with name '%s' not found.\n", name);
    }
}

int main() {
    int numStudents = 5;
    struct Student students[numStudents];

    // Assume the array of structures is initialized with some values here

    // Search for a student by name
    char searchName[20];
    printf("Enter the name to search: ");
    scanf("%s", searchName);

    searchStudentByName(students, numStudents, searchName);

    return 0;
}
