#include "hash_tables.h"

/**
 * hash_table_get- retrieves a value associated with a key
 * @ht: a pointer to the hash table to look into to
 * @key: key to look for
 * Return: the value associated with the element, or
 * NULL if key couldn't be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *node = NULL;

	index = key_index((const unsigned char *)key, ht->size);

	/* try to find a valid index */

	node = ht->array[index];

	/* key not found */

	if (!node)
	{
		return (NULL);
	}

	while (node)
	{
		if (!strcmp(node->key, key))
		{
			return (node->value);
		}

		node = node->next;	/* go to next node to find key */
	}

	return (NULL);
}
