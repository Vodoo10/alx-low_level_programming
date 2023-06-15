#include <stdlib.h>
#include "main.h"


/**

 * *string_nconcat - concatenates n bytes of a string to another string

 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

	char *c;

	unsigned int i = 0, j = 0, tab = 0, tab1 = 0;



	while (s1 && s1[tab])

		tab++;

	while (s2 && s2[tab1])

		tab1++;



	if (n < tab1)

		c = malloc(sizeof(char) * (tab + n + 1));

	else

		c = malloc(sizeof(char) * (tab + tab1 + 1));



	if (!c)

		return (NULL);



	while (i < tab)

	{

		c[i] = s1[i];

		i++;

	}



	while (n < tab1 && i < (tab + n))

		c[i++] = s2[j++];



	while (n >= tab1 && i < (tab + tab1))

		c[i++] = s2[j++];



	c[i] = '\0';



	return (c);

}

