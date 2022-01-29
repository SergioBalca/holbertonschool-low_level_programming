#include "hash_tables.h"

/**
 * hash_table_set- adds an element to the hash table
 * @ht: hash table to add or uppdate the key/value to
 * @key: the key
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new = NULL;
	hash_node_t *aux = NULL;


	if (!ht || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);

	new = malloc(sizeof(hash_node_t));
	if (!new)
	{
		free(new);
		return (0);
	}
	
	aux = ht->array[index];
	if (ht->array[index] && strcmp(key, (const char *)aux->key) == 0)
	{
		free(aux->value);
		free(new);
		aux->value = strdup(value);
		return (1);
	}

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
