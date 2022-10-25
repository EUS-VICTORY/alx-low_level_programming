#include "main.h"
#include <stdio.h>

/**
 * main - Function that swaps the value of two integers
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
int c = *a;
	*a = *b;
	*b = c;
}
