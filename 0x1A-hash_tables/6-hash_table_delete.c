#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table.
 * @ht: is the hash table to delete
 */

void hash_table_delete(hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current_node;
hash_node_t *tmp;
if (!ht)
{
return;
}
for (i = 0; i < ht->size; i++)
{
current_node = ht->array[i];
while (current_node)
{
tmp = current_node;
current_node = current_node->next;
free(tmp->key);
free(tmp->value);
free(tmp);
}
}
free(ht->array);
free(ht);
}
