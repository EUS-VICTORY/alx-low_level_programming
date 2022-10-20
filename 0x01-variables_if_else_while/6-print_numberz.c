#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main: Program that prints all single digit number of base 10
*starting from zero
*Return: Always 0
*/
int main(void)
{
	int num;
	for (num = 0; num < 10; num++)
putchar ((num % 10) + '0');
return (0);
}
