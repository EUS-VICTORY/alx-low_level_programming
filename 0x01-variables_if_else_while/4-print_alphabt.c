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
char alphabet;
for (alphabet a = 'a'; alphabet a <= 'z'; alphabet++;)
{
if (alphabet a != 'e' && alphabet a != 'q')
putchar(alphabet);
}
putchar('\n');
return 0;
}
