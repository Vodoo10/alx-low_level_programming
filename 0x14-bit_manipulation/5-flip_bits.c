#include "main.h"

/**
* flip_bits - Function
* @n: Parameter
* @m: Parameter
*
* Return: Value
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, j = 0;
unsigned long int va;
unsigned long int vb = n ^ m;
for (i = 63; i >= 0; i--)
{
va = vb >> i;
if (va & 1)
j++;
}
return (j);
}

