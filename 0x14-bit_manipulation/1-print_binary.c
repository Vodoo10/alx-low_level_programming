#include "main.h"

/**
* print_binary - Function
* @n: Parameter
*/
void print_binary(unsigned long int n)
{
int i, j = 0;
unsigned long int ka;
for (i = 63; i >= 0; i--)
{
ka = n >> i;
if (ka & 1)
{
_putchar('1');
j++;
}
else if (j)
_putchar('0');
}
if (!j)
_putchar('0');
}

