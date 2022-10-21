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
int x;

for (x = 48; x < 58; x++);
putchar(x);
putchar(44);
putchar(32);
putchar('\n');
return (0);
}	

