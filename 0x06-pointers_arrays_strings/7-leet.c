#include "main.h"
/**
 * leet - Function that encodes a string into 1337
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 * @s: pointer to string
 * Return: pointer to s
 */
char *leet(char *s)
{
int i, j;
char *a = "aAeEoOtTlL";
char *b = "4433007711";
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; j < 10; j++)
if (s[i] == a[j])
s[i] = b[j];
}
return (s);
}
