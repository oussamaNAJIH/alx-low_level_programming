#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked list_t list
 * @h: the listint_t list to calculate the length of
 * Return: returns the length
 */

size_t listint_len(const listint_t *h)
{
int count = 0;
const listint_t *tmp;
tmp = h;
while (tmp != NULL)
{
count++;
tmp = tmp->next;
}
return (count);
}
