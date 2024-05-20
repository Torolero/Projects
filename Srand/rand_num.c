#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main(void)
{
    int i, num;
    printf(" Program to get the random number from 1 to 100\n");
    for ( i = 0; i <= 10; i++)
    {
        num = rand()% 100 + 1;
        printf("%d", num);
        getch();
    }
    
}