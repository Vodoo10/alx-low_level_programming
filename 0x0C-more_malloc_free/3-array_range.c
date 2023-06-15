#include <stdlib.h>
#include "main.h"



/**
 */

int *array_range(int min, int max)

{

	int *c;

	int i, size;



	if (min > max)

		return (NULL);



	size = max - min + 1;



	c = malloc(sizeof(int) * size);



	if (c == NULL)

		return (NULL);



	for (i = 0; min <= max; i++)

		c[i] = min++;



	return (c);

}

