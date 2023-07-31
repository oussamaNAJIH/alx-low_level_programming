#include "lists.h"
#include <string.h>



/**
 * add_nodeint - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head node
 * @n: value of integer of node to be added
 * Return: returns the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *tmp = (listint_t *)malloc(sizeof(listint_t));
if (tmp == NULL)
{
return (NULL);
}
tmp->n = n;
tmp->next = NULL;
if (*head != NULL)
{
tmp->next = *head;
}
*head = tmp;
if (tmp != NULL)
{
return (*head);
}
else
{
return (NULL);
}

}
