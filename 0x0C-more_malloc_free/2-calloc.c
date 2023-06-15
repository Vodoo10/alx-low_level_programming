#include <stdlib.h>
#include "main.h"

/**

 */

char *_memset(char *s, char b, unsigned int n)

{

	unsigned int i;



	for (i = 0; i < n; i++)

	{

		s[i] = b;

	}



	return (s);

}

/**

 */

void *_calloc(unsigned int nmemb, unsigned int size)

{

	char *c;



	if (nmemb == 0 || size == 0)

		return (NULL);



	c = malloc(size * nmemb);



	if (c == NULL)

		return (NULL);



	_memset(c, 0, nmemb * size);



	return (c);

}

