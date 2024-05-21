#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *ptr;

    ptr = (char *)malloc(4 * sizeof(char));

    if(ptr == NULL) 
    {
        printf("Error! memory not allocated.");
        return 1;
    }
    if(ptr != NULL) 
    {
        printf("Memory was successfully allocated.\n");
        exit(0);
        free(ptr);
        return 0;
    }
}
