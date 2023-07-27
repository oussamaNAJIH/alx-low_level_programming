#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: the list_t list to calculate the length of
 * Return: returns the length
 */

size_t list_len(const list_t *h)
{
int count = 0;
const list_t *tmp;
tmp = h;
while (tmp != NULL)
{
count++;
tmp = tmp->next;
}
return (count);
}
