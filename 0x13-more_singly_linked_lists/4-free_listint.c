#include "lists.h"

/**
* free_listint - Function
* @head: Parameter
*/
void free_listint(listint_t *head)
{
listint_t *p;

while (head)
{
p = head->next;
free(head);
head = p;
}
}

