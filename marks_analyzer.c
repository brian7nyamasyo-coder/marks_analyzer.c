#include <stdio.h>

int main(void)
{
    int marks[5];
    int total = 0;
    float average;

    printf("===== STUDENT MARKS ANALYZER =====\n");

    // Collect marks
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    // Display marks and calculate total
    printf("\n===== STUDENT RESULTS =====\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Student %d: %d\n", i + 1, marks[i]);

        total += marks[i];
    }

    // Calculate average
    average = total / 5.0;

    // Display results
    printf("\nTotal marks: %d\n", total);
    printf("Average marks: %.2f\n", average);

    return 0;
}