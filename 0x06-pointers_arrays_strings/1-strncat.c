#include "main.h"
/**
 * _strncat.c - Function that concatenates two strings 
 * while appending only n byte from source
 * @dest: destination string
 * @src: source string for concatenation
 * @n: number of bytes from src that will be appended
 * Return: pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
int l1, l2, i;
char s1[30] = "dest";
char s2[] = "src";
_strncat(s1, s2, n);
/* l1 = strlen(s1);
 * l2 = strlen(s2);
for (i = 0; i <= l2; i++)
{
s1[l2 + i] = s2[i];
}*/
printf("string after concatenation is:%s\n", s1);
puts(s1);
return (*dest);
}

