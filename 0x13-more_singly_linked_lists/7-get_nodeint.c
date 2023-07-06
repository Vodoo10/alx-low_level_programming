#include "lists.h"

/**
* get_nodeint_at_index - Function
* @head: Parameter
* @index: Parameter
*
* Return: Value
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *p = head;
while (p && i < index)
{
p = p->next;
i++;
}
return (p ? p : NULL);
}

