#include "main.h"
#include <stdio.h>

/**
* main - Function that reverses a string
*@s: the input string
*/

void rev_string(char *s)
{
int a, len;
char *begin, *end = s;
for (a = 0; s[a] != '\0');
end++;
}
begin = s;
for (a = 0; a < len/2; a++)
{
char x;
x = *end;
*begin = x;
begin++;
end--;
}
end[len + 1] = '\0';
}

