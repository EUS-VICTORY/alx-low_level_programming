#include <stdio.h>
#include <stdlib.h>

/**
*main - Entry point
*Description: Print all possible combinations of single-digit numbers.
*Numbers must be separated by commas and a space.
*You can only use `putchar` to print to the console.
*You can only use `putchar` up to four times.
*You are not allowed to use any variable of type `char`.
*Return: Always 0 Success
*/

int main(void)
{
int i;

for (i = 48; i < 58; i++)
putchar(i);
putchar(',');
putchar(' ');
putchar('\n');
return (0);
}	

