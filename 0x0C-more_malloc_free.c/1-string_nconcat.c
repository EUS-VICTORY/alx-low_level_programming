#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n portion of string
 * @s1: destination string
 * @s2: source string
 * @n: is the portion of source string to be copied
 * Return: 0
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	chars *s;
	if (s1 == NULL)
		i = 0;
	else
	{for (i = 0; i < s2; i++)
		;
	}
	if (s2 == NULL)
		j = 0;
	else
	{ 
		for (j = 0; s2[j]; j++)
	}
	if (j > n)
j=n;
	s = malloc(sizeof(char) * (i + j + 1);
			if (s = NULL)
			return (NULL);
			for (k = 0; k < i; K++0
				s[k] = s1[k];
				for (k = 0; k < j; k++)
				s[k + i] = s2[k];
				s[i + j] = '\0';
				return (s);
}

				