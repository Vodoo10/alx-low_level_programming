#include "lists.h"

/**
* add_nodeint - Function
* @head: Parameter
* @n: Parameter
*
* Return: Value
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *ap;

ap = malloc(sizeof(listint_t));
if (!ap)
return (NULL);

ap->n = n;
ap->next = *head;
*head = ap;

return (ap);
}

