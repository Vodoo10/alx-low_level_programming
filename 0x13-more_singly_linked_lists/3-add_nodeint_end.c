#include "lists.h"

/**
* add_nodeint_end - Function
* @head: Parameter
* @n: Parameter
*
* Return: Value
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *ap;
listint_t *p = *head;

ap = malloc(sizeof(listint_t));
if (!ap)
return (NULL);

ap->n = n;
ap->next = NULL;

if (*head == NULL)
{
*head = ap;
return (ap);
}

while (p->next)
p = p->next;

p->next = ap;

return (ap);
}

