#include <stdio.h>

int main()
{
    int numberOfStudents;
    int score;
    int passed = 0;
    int failed = 0;

    printf("Enter number of students: ");
    scanf("%d", &numberOfStudents);

    for (int i = 1; i <= numberOfStudents; i++)
    {
        printf("Enter score for student %d: ", i);
        scanf("%d", &score);

        while (score < 0 || score > 100)
        {
            printf("Invalid score. Enter a score between 0 and 100: ");
            scanf("%d", &score);
        }

        if (score >= 50)
        {
            printf("Student %d: PASS\n", i);
            passed++;
        }
        else
        {
            printf("Student %d: FAIL\n", i);
            failed++;
        }
    }

    printf("\nTotal Passed: %d\n", passed);
    printf("Total Failed: %d\n", failed);

    return 0;
}