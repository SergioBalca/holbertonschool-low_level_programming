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
	unsigned long int index = 0;
	hash_node_t *newpair = NULL;
	hash_node_t *next = NULL;
	hash_node_t *last = NULL;

	index = key_index((unsigned char *)key, ht->size);

	next = ht->array[index];

	while (!next && !next->key && strcmp(key, next->key) > 0)
	{
		last = next;
		next = next->next;
	}

	/* There's already a pair. Update that node */
	
	if (!next && !next->key && strcmp(key, next->key) == 0)
	{
		free(next->value);
		next->value = strdup(value);
	}
	
	/* Couldn't find it. Create a new pair*/

	else
	{
		newpair = ht_newpair(key, value);

		if (next == ht->array[index])
		{
			newpair->next = next;
			ht->array[index] = newpair;
		}

		else if (next == NULL)
		{
			last->next = newpair;
		}
		else
		{
			newpair->next = next;
			last->next = newpair;
		}
	}

	return (1);
}



/**
 * ht_newpair- defines a new pair of key/vale
 * @key: the key
 * @value: value associated with the key
 * Return: a pointer to the new pair defined
 */

hash_node_t *ht_newpair(const char *key, const char *value)
{
	hash_node_t *newpair = NULL;
	
	if (strlen(key) == 0)
	{
		return (0);
	}
	
	newpair = malloc(sizeof(hash_node_t));
	if (!newpair)
	{
		free(newpair);
		return (0);
	}

	newpair->key = strdup(key);
	if (!newpair->key)
	{
		free(newpair->key);
		return (0);
	}

	newpair->value = strdup(value);
	if (!newpair->value)
	{
		free(newpair->value);
		return (0);
	}

	newpair->next = NULL;

	return (newpair);

}
