#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Program that prints a random number n
*each time it is executed
*Records the last digit of n
* Return: Always 0
*/

int main(void)
{
int n;
int q;
srand(time(0));
n = rand() - RAND_MAX / 2;
q = n % 10;

if (q > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, q);
}
else if (q == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, q);
}
else
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, q);
}
return (0);
}
