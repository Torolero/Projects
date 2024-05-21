#include <stdio.h>

void hello(void)
{
    char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33};
    puts(array);
    //printf("%s", array);
}

int main(void)
{
    hello();
}

/*#include <stdio.h>


void hello(void)
{
	char array[] = {72, 101, 108, 108, 111, 44, 32, 87, 111, 114, 108, 100, 33, '\0'};
    puts(array);

	//printf("%s", array);
}

int main(void) 
{
	hello();
}
*/
//The character "\O" is a null character to mark an end point.
//The char array is printing a string because each number represents a characteer in the ASCII chart table.