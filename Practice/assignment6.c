#include <stdio.h>

int main(void)
{
    int numerator;
    printf("Enter a numerator: ");

    scanf("%i", &numerator);

    int denominator;
    printf("Enter a denominator: ");

    scanf("%i", &denominator);

    // float result = numerator / denominator;
    // float remainder = numerator % denominator;

    if (numerator % denominator == 0)
    {
        printf("There is NOT a remainder!\n");
    }
    else
    {
        printf("There is a remainder!\n");
    }

    return 0;
}