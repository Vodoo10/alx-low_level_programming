#include "lists.h"

/**
* insert_nodeint_at_index - Function
* @head: Parameter
* @idx: Parameter
* @n: Parameter
*
* Return: Value
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *k;
listint_t *p = *head;

k = malloc(sizeof(listint_t));
if (!k || !head)
return (NULL);
k->n = n;
k->next = NULL;
if (idx == 0)
{
k->next = *head;
*head = k;
return (k);
}
for (i = 0; p && i < idx; i++)
{
if (i == idx - 1)
{
k->next = p->next;
p->next = k;
return (k);
}
else
p = p->next;
}
return (NULL);
}

