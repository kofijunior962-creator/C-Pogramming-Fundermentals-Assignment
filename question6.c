#include <stdio.h>

int main()
{
    float voltage;
    float current;
    float time;

    printf("Enter voltage: ");
    scanf("%f", &voltage);

    printf("Enter current: ");
    scanf("%f", &current);

    printf("Enter time in hours: ");
    scanf("%f", &time);

    float power = voltage * current;
    float energy = power * time;

    printf("Power: %.2f W\n", power);
    printf("Energy: %.2f Wh\n", energy);

    return 0;
}