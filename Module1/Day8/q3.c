//Array of structures ques3- display all members in the above array of structures

#include <stdio.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void displayStudents(const struct Student *students, int numStudents) {
    for (int i = 0; i < numStudents; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
}

int main() {
    int numStudents = 5;
    struct Student students[numStudents];


    displayStudents(students, numStudents);

    return 0;
}
