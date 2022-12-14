#include "main.h"

/**
 * clear_bit - sets value of bit to 0 at a given index
 * @n: A pointer to the bit
 * @index: index at which to set value
 * Return: 1 on success, and -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
*n &= ~(1 << index);
return (1);
}
