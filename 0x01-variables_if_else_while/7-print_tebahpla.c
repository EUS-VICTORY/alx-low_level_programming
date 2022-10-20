#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point of the program
*Program that prints lower case alphabet in reverse
*/

int main(void)
{
int i;
for (i = 'z'; i >= 'a'; i--)
putchar(i);
putchar('\n');
return (0);
}
