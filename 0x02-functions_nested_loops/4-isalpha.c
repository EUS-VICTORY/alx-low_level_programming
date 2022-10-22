#include "main.h"
/**
 * _isalpha - Checks for alphabetic character
 * @c: the character to be checked
 * Returns: 1 if c is a letter, lowercase or uppercase, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
