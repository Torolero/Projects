#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    printf("Random Numbers are:\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d", rand());
    }
    return 0;
}