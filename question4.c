#include <stdio.h>
 
int main()
{

    int age;
    int studentID;
    float examinationscore;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your student ID: ");
    scanf("%d", &studentID);

    printf("Enter your exam score: ");
    scanf("%f", &examinationscore);

    printf("Age: %d\n", age);
    printf("Student ID: %d\n", studentID);
    printf("Exam Score: %.2f\n", examinationscore);

    return 0;
}