#include <stdio.h>
/**
*main - Prints all possible combinations of single-digit number 
*Return: Always 0.
*/
int main(void)
{
  int num;
  for (num =0; num <= 9; num++)
{
if (num == 9)
  continue;

putchar(',');
putchar(' ');
}

putchar('\n');

return (0);
}
