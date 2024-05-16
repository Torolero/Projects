#include <stdio.h>

int main(void)
{   
    int array[] = {1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(array) / sizeof(array[0]);

    printf("The array has %i elements.\n", length);
    printf("Total bytes taken: %lu.", sizeof(array));

}