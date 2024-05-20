#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int num, i;
    time_t t1;

    printf("Enter a number to set the limit for a random number \n");
    scanf("%d", &num);

    srand((unsigned)time(&t1));
    printf("\n");

    for ( i = 0; i < num; i++)
    {
        printf("%d\n", rand()%50);
    }
    return 0;
    
}