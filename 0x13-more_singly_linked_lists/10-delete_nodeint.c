#include "lists.h"

/**
* delete_nodeint_at_index - Function
* @head: Parameter
* @index: Parameter
*
* Return: Value
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *p = *head;
listint_t *ds = NULL;
unsigned int i = 0;
if (*head == NULL)
return (-1);
if (index == 0)
{
*head = (*head)->next;
free(p);
return (1);
}
while (i < index - 1)
{
if (!p || !(p->next))
return (-1);
p = p->next;
i++;
}
ds = p->next;
p->next = ds->next;
free(ds);
return (1);
}

