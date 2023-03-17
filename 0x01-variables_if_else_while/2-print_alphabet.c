#include <stdio.h>
/**
  * main - Entry point
  *
  * Return: Always 0 (success)
  */

int main(void)
{
	char a;
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
