#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in degrees Celsius: ");

    scanf("%f", &celsius);

    fahrenheit = (celsius * 1.8) + 32;

    printf("%.2f degrees Celsius equals %.2f degrees Fahrenheit.", celsius, fahrenheit);

    return 0;
}