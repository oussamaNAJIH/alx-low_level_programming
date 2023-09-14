#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data 
 * @head: a dlistint_t list
 * Return: returns the sum
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *tmp = head;
int sum = 0;
if (tmp == NULL){
    return (0);
}
while (tmp != NULL)
{
sum += tmp->n;
tmp = tmp->next;
}
return (sum);
}
