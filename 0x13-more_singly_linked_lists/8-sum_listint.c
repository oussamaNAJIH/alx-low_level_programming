#include "lists.h"
#include <stdlib.h>


/**
 * sum_listint - calculates the sum of all the data linked list
 * @head: pointer to the head of the list
 * Return: returns the sum of all the data (n) of a listint_t linked list
 */

int sum_listint(listint_t *head)
{
listint_t *tmp = head;
int summ = 0;
if (tmp == NULL)
{
return (0);
}
while (tmp != NULL)
{
summ += tmp->n;
tmp = tmp->next;
}
return (summ);
}
