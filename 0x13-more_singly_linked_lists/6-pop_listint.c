#include "lists.h"

/**
* pop_listint - Function
* @head: Parameter
*
* Return: Value
*/
int pop_listint(listint_t **head)
{
listint_t *p;
int k;
if (!head || !*head)
return (0);
k = (*head)->n;
p = (*head)->next;
free(*head);
*head = p;
return (k);
}

