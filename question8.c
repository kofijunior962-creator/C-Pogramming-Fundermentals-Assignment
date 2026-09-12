#include <stdio.h>

int main()
{
    int score;

    printf("Enter score: ");
    scanf("%d", &score);

    printf("Score: %d\n", score);

    if (score < 0 || score > 100)
    {
        printf("Invalid score\n");
    }
    else if (score >= 80)
    {
        printf("Grade: A\n");
    }
    else if (score >= 70)
    {
        printf("Grade: B\n");
    }
    else if (score >= 60)
    {
        printf("Grade: C\n");
    }
    else if (score >= 50)
    {
        printf("Grade: D\n");
    }
    else
    {
        printf("Grade: F\n");
    }

    return 0;
}