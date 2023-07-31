#include "lists.h"


/**
 * print_listint - prints all the elements of a listint_t list
 * @h: the listint_t list to print all the elements of
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *h)
{
int count = 0;
const listint_t *tmp;
tmp = h;
if (tmp == NULL)
{
return (0);
}
else
{
while (tmp != NULL)
{
printf("%d\n", tmp->n);
count++;
tmp = tmp->next;
}
return (count);
}
}
