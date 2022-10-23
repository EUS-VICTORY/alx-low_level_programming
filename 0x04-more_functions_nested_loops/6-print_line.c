#inlcude "main.h"

/**
 * main - Function that prints a straight line in the terminal
 * @n: number of times _ should be printed
 * the line should end with \n, if n is 0 or less the function should only print\n
 */

void print_line(int n)
{
int num_lines;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (num_lines = 1; num__lines <= n; num_line++)
{
_putchar(' ');
}
_putchafr('\n');
}
}
