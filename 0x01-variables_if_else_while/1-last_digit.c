#include <stdlib.h>
  
#include <time.h>
  
/* main: Program that assigns a random variable n
 *each time ity is executed
 *Return: Always 0 
*/

int main(void)
  
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
printf("and is greater than 5\n", n);
if (n = 0)
printf("and is 0\n", n);
if (n < 6)
printf("and is less 6 and not zero\n", n);
return (0);  
}
