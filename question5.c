#include <stdio.h>

int main()
{
    float firstNumber;
    float secondNumber;

    printf("Enter first number: ");
    scanf("%f", &firstNumber);

    printf("Enter second number: ");
    scanf("%f", &secondNumber);

    float addition = firstNumber + secondNumber;
    float subtraction = firstNumber - secondNumber;
    float multiplication = firstNumber * secondNumber;
    float division = firstNumber / secondNumber;

    printf("Addition: %.2f\n", addition);
    printf("Subtraction: %.2f\n", subtraction);
    printf("Multiplication: %.2f\n", multiplication);
    printf("Division: %.2f\n", division);

    return 0;

}