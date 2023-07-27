#include "lists.h"
#include <string.h>

/**
 * _strlen - returns the length of a string
 * @s: string to return the length of
 * Return: returns the length of the string
 */

int _strlen(const char *s)
{
int compt = 0;
int i = 0;
while (s[i] != '\0')
{
compt++;
i++;
}
return (compt);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to pointer to the head node
 * @str: value of string of node to be added
 * Return: returns the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
int lenght = _strlen(str);
list_t *tmp = (list_t *)malloc(sizeof(list_t));
tmp->str = strdup(str);
tmp->next = NULL;
tmp->len = lenght;
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
