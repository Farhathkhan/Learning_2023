#include <stdio.h>

int main() {
    int rollnum;
    char name[40];
    float phyMarks, mathMarks, chemMarks;
    float totalMarks, percentage;
    printf("Enter the students Roll Number: ");
    scanf("%d", &rollnum);

    printf("Enter the Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks of Physics: ");
    scanf("%f", &phyMarks);

    printf("Enter Marks of Math: ");
    scanf("%f", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%f", &chemMarks);

    // for Calculating total marks and percentage
    totalMarks = phyMarks + mathMarks + chemMarks;
    percentage = (totalMarks / 300) * 100;

    // summary
    printf("\n--- Summary ---\n");
    printf("Roll No: %d\n", rollnum);
    printf("Name: %s\n", name);
    printf("Physics Marks: %.2f\n", phyMarks);
    printf("Math Marks: %.2f\n", mathMarks);
    printf("Chemistry Marks: %.2f\n", chemMarks);
    printf("Total Marks: %.2f\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}