#include "hash_tables.h"

/**
 * hash_table_create - create an hash tables
 * @size: size of the hash
 * Return: new hash
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash;

	new_hash = malloc(sizeof(hash_table_t));

	if (new_hash == NULL || size == 0)
		return (NULL);

	new_hash->size = size;
	new_hash->array = calloc(sizeof(hash_node_t) * size);
	if (new_hash->array == NULL)
	{
		free(new_hash);
		return (NULL);
	}

	return (new_hash);
}
