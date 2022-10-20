#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Program that prints alphabet in lower case
*except q and e
*Return: Always 0 (Success)
*/
int main(void)
{
char b;

for (b = 'a'; b <= 'z'; b++);
	{
if (b != 'e' && b != 'q')
putchar(b);
	}
putchar('\n');
return 0;
}
