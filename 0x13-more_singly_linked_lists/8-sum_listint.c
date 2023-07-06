#include "lists.h"

/**
* sum_listint - Function
* @head: Parameter
*
* Return: Value
*/
int sum_listint(listint_t *head)
{
int ab = 0;
listint_t *p = head;
while (p)
{
ab += p->n;
p = p->next;
}
return (ab);
}

