#include "main.h"

/**
*rev_string - Function that reverses a string
*@s: the input string
*/

void rev_string(char *s)

{
int l, i;
char begin_ptr, end_ptr, ch;
l = *s;
for (i = 0; i < l-1; i++)
end_ptr++;
for (i = 0; i < l/2; i++)
{
ch = *end_ptr;
*end_ptr = *begin_ptr;
*begin_ptr = ch;
begin_ptr++;
end_ptr--;
}
}

