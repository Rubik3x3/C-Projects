#include <stdio.h>

int main()
{
    int num1, num2, result;

    printf("Enter number 1: ");
    scanf("%i", &num1);

    printf("Enter number 2: ");
    scanf("%i", &num2);

    result = num1 + num2;

    printf("Result: %i", result);

    return 0;
}