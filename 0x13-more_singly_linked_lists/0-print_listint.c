#include "lists.h"

/**
* print_listint - Function
* @h: Parameter
*
* Return: Value
*/
size_t print_listint(const listint_t *h)
{
size_t k = 0;

while (h)
{
	printf("%d\n", h->n);
	k++;
	h = h->next;
}

	return (k);
}

