#include <stdio.h>

int main(void)
{
    float testScores[10] = {};

    char decision;
    float average;
    // printf("Enter a test score:");
    // scanf("%i", &testScores[0]);

    for (int i = 0; i <= 7; i++)

    {
        printf("Would you like to continue? Y/N: ");
        scanf("%s", &decision);

        if (decision == 'y' || decision == 'Y')
        {
            printf("Enter a test score:");
            scanf("%f", &testScores[i]);
        }
        else if (decision == 'n' || decision == 'N')
        {
            average = ((testScores[0] + testScores[1] + testScores[2] + testScores[3] + testScores[4] + testScores[5] + testScores[6] + testScores[7]) / (i));
            break;
        }
    }
    printf("%.2f is the average.", average);
    return 0;
}
