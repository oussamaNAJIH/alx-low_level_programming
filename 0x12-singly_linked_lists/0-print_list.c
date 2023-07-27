#include "lists.h"


/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list to print all the elements of
 * Return: returns the number of nodes
 */

size_t print_list(const list_t *h)
{
int count = 0;
list_t *tmp;
tmp = h;
while (tmp->next != NULL)
{
if (tmp->str == NULL)
{
printf("[0] (nil)");
}
else
{
printf("str");
}
count++;
tmp = tmp->next;
}
return (count);
}