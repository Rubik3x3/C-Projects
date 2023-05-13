#include <stdio.h>

int main()
{
    int numbers[] = {24, 8, 75, 36, 76};

    int i;

    int lenght = sizeof numbers / sizeof numbers[0];

    for (i = 0; i < lenght; i++)
    {
        printf("%d", numbers[i]);
    }
}