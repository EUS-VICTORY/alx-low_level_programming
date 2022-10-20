#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Program that prints alphabet in lower case
*and then upper case
*Return: Always 0 (Success)
*/
int main(void)
{
char alphabet
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
for (alphabet = 'A'; alphabet <= 'Z' ; alphabet++)
{putchar(alphabet);
}
putchar('\n');
return (0);
}
