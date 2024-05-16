#include <stdio.h>

int main(void)
{
    int user_input;

    do
    {
        printf("Enter a number between 1 and 500: ");
        scanf("%i", &user_input);

    } while (user_input <= 0 || user_input > 500);

    if (user_input >= 1 && user_input <= 100)
    {
        printf("Your number is between 1 and 100!\n");
    }
    else if (user_input >= 101 && user_input <= 200)
    {
        printf("Your number is between 101 and 200!\n");
    }
    else
    {
        if (user_input >= 201 && user_input <= 300)
        {
            printf("Your number is between 201 and 300!\n");
        }
        else if (user_input >= 301 && user_input <= 400)
        {
            printf("Your number is between 301 and 400!\n");
        }
        else
            printf("Your number is between 401 and 500!\n");
    }
    return 0;
    // scanf("%i", &user_input);
}
