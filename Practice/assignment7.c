#include <stdio.h>
#include <math.h>

int main(void)
{
    float A, B, C;
    printf("Enter the value of variable 'A': ");
    scanf("%f", &A);

    printf("Enter the value of variable 'B': ");
    scanf("%f", &B);

    printf("Enter the value of variable 'C': ");
    scanf("%f", &C);

    // int x = (pow(A, 2) + B + C);
    //  printf("Here is the value of each: %i, %i, %i \n", A, B, C);
    // printf("%i", x);
    float squareRoot = sqrt(B * B - 4 * A * C);
    float positive = (-B + squareRoot) / (2 * A);
    float negative = (-B - squareRoot) / (2 * A);

    printf("The solution using the '+' operator is: %f\n", positive);
    printf("The solution using the '-' operator is: %f\n", negative);

    for (int i = 0; i < 1; i++)
    {
        if (((A) * (positive * positive)) + (B * positive) + C == 0 && ((A) * (negative * negative)) + (B * negative) + C == 0)
        {
            printf("This is a valid formula.\n");
        }
        else
        {
            printf("This is not a valid formula. \n");
        }
    }
    return 0;
}

/*Enter the value of variable 'A': -7
Enter the value of variable 'B': 2
Enter the value of variable 'C': 9*/