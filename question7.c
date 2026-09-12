#include <stdio.h>

int main()
{
    int score;

    printf("Enter examination score: ");
    scanf("%d", &score);

    if (score < 0 || score > 100)
    {
        printf("Invalid score\n");
    }
    else if (score >= 50)
    {
        printf("Result: PASS\n");
    }
    else
    {
        printf("Result: FAIL\n");
    }

    return 0;
}