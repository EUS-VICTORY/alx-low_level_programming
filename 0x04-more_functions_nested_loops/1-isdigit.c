#include "main.h"

/**
 * main -Function that checks for the digit
 * @c: tested character
 * Return: returns 1 if it is uppercase, 0 if not
 */

int _isdigit(int c)
{
if ((c >= '0') && (c <= '9'))
return (1);
else
return (0);
}
