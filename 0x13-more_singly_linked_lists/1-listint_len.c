#include "lists.h"

/**
* listint_len - Function
* @h: Parameter
*
* Return: Value
*/
size_t listint_len(const listint_t *h)
{
size_t k = 0;

while (h)
{
k++;
h = h->next;
}
return (k);
}

