 //Array of structures ques4- sort the array of structures in descending order based on marks

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void sortStudents(struct Student *students, int numStudents) {
    int i, j;
    struct Student temp;

    for (i = 0; i < numStudents - 1; i++) {
        for (j = 0; j < numStudents - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numStudents = 5;
    struct Student students[numStudents];

    sortStudents(students, numStudents);

    // Display the sorted array of structures
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }

    return 0;
}

