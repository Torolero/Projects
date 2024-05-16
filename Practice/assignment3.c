#include <stdio.h>

int main(void)
{
    char first[30];
    char last[30];

    printf("Enter your first name: ");

    scanf("%s", &first);

    printf("Enter your last name: ");
    scanf("%s", &last);

    printf("Hello, %s %s!", first, last);
}



/*tokyo:~/LearningC/ # ./assignment3                                     
Enter your first name: Jimmy
Enter your last name: Smith
Hello Jimmy Smith!*/