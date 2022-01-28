#include "hash_tables.h"

/**
 * hash_table_create- creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 * or NULL if if something went wrong
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hashtable = NULL;
	unsigned int i = 0;

	/* Alocate the table itself */

	hashtable = malloc(sizeof(hash_table_t));
	if (!hashtable)
	{
		free(hashtable);
		return (NULL);
	}

	/* Alocate pointers to the head nodes */

	hashtable->array = malloc(sizeof(hash_node_t *) * size);
	if (!hashtable->array)
	{
		free(hashtable->array);
		return (NULL);
	}

	for (; i < size; i++)
	{
		hashtable->array[i] = NULL;
	}

	hashtable->size = size;

	return (hashtable);
}
