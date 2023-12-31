#include "hash_tables.h"

/**
 * hash_table_create - function to create a hash table
 * @size: size of the table
 * Return: the created hash table if succeeded, NULL otherwise
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_node_t **arrayHash = NULL;
	hash_table_t *tableHash = NULL;

	if (size == 0)
		return (NULL);
	arrayHash = malloc(sizeof(char *) * size);
	if (!arrayHash)
		return (NULL);
	tableHash = malloc(sizeof(hash_table_t));
	if (!tableHash)
	{
		free(arrayHash);
		return (NULL);
	}
	tableHash->array = arrayHash;
	tableHash->size = size;

	return (tableHash);
}
