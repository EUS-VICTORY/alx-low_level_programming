#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Program that prints lower case alphabets
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet;
for (alphabet = 'a'; alphabet <= 'z' ; alphabet++)
{
putchar(alphabet);
}
putchar('\n');
return (0);
}
