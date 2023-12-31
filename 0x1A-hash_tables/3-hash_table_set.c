#include "hash_tables.h"


/**
 * create_node - create new node
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (can be an empty string)
 * Return: 1 if it succeeded, 0 otherwise
 */
hash_node_t *create_node(const char *key, const char *value)
{
hash_node_t *new_node;
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (NULL);
}
new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (NULL);
}
return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add or update the key/value to
 * @key: the key (cannot be an empty string)
 * @value: the value associated with the key (can be an empty string)
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *current_node;
if (!ht || !key || strcmp(key, "") == 0)
return (0);

index = key_index((unsigned char *)key, ht->size);
current_node = ht->array[index];
while (current_node)
{
if (strcmp(current_node->key, key) == 0)
{
free(current_node->value);
current_node->value = strdup(value);
if (current_node->value == NULL)
{
return (0);
}
return (1);
}
current_node = current_node->next;
}
new_node = create_node(key, value);
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
