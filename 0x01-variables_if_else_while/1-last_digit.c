#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (succes)
 */
int main(void)
{
	int n;
	int x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	if (x == 0)
		printf("Last digit of %d is %d and is 0\n", n, x);
	if (x < 6 && x != 0)
		printf("Last digist of %d is %d is less and 6 and not 0\n", n, x);
	return (0);
}
