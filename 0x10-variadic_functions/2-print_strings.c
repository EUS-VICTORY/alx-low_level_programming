#include "variadic_functions.h"

/**
 * prints_strings - Prints strings followed by new line
 * @separator: strings to be printed between the strings
 * @n: number of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	register unsigned int i;
	va_list arguments;
	char *str;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(arguments, char *);
	if (!str)
		str = "(nil)";
	if (!separator)
		printf("%s", str);
	else if (separator && !i)
		printf("%s", str);
	else 
		printf("%s%s", separator, str);
	}	 	
printf("\n");
va_end(arguments);
}
