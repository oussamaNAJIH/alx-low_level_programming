#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: is the hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
unsigned long int i;
hash_node_t *current_node;
int first = 1;
if (!ht)
{
return;
}
printf("{");
for (i = 0; i < ht->size; i++)
{
current_node = ht->array[i];
while (current_node)
{
if (!first)
{
printf(", ");
}  
printf("'%s': '%s'", current_node->key, current_node->value);
first = 0;            
current_node = current_node->next;
}
}
printf("}\n");
}
