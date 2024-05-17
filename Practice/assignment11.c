#include <stdio.h>

int main(void)
{
    int testScores[10] = {};

    char decision;
    float average;

    printf("Enter a test score:");
    scanf("%i", &testScores[0]);

    for (int i = 1; i <= 7; i++)
    {
        printf("Would you like to continue? Y/N: ");
        scanf("%s", &decision);

        if (decision == 'y' || decision == 'Y')
        {
            printf("Enter a test score:");
            scanf("%i", &testScores[i]);
        }
        else if (decision == 'n' || decision == 'N')
        {
            printf("%f is the average.\n", average);
            break;
        }
    }

    printf("%i, %i, %i\n", testScores[0], testScores[1], testScores[2]);
    return 0;

    /*int array[3] = {};
    printf("Enter 1 commands: ");
    scanf("%i", &array[0]);

    printf("Enter 2 commands: ");
    scanf("%i", &array[1]);

    printf("Enter 3 commands: ");
    scanf("%i", &array[2]);

    printf("%i, %i, %i", array[0], array[1], array[2]);*/
}


