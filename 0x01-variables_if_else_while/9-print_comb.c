#include <stdio.h>
#include <stdlib.h>

/**
*main - main block
*Description: Print all possible combinations of single-digit numbers.
*Numbers must be separated by commas and a space.
*You can only use `putchar` to print to the console.
*You can only use `putchar` up to four times.
*You are not allowed to use any variable of type `char`.
*Return: 0
*/

int main(void)

{
int x;

for (x = 0 ; x <= 9; x++);

putchar(x +'0');
if (x < 9)
putchar(',');
putchar(' ');
putchar('\xn');
return (0);
}
