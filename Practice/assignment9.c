// C program named mainreturn.c to demonstrate the working
// of command line arguement
#include <stdio.h>

// defining main with arguments
int main(int argc, char *argv[3])
{
    if (argc > 3 || argc < 3)
    {
        printf("Usage: ./assignment9 Firstname Lastname\n");
    }
    else if (argc = 3)
    {
        printf("Hello, %s %s! \n", argv[1], argv[2]);
    }
    return 0;
}
