#include <stdio.h>

int main(void)
{
    int variable = 4356787;
    int* ptr = &variable;

    printf("The value of our pointer is: %p", ptr);
}