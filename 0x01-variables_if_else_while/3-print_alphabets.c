#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main: Program that prints alphabet in lower case 
 *and then upper case
 *Return: Always 0
 */
int main(void)
{
  for(int x ='A'; x <= 'Z'; x++);
  {x = tolower(x);
    putchar("x\n" );
    x = toupper(x);
    putchar("x\n");
  }
  return 0;
}
