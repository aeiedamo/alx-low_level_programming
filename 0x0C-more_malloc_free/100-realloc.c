#include "main.h"

/**
 * _realloc - a function that reallocates a memory block using malloc and free.
 * @ptr: pointer to array of memory block.
 * @old_size: the size to be changed.
 * @new_size: the new size of the block.
 * Return: pointer to new memory block if success, NULL if failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newData = NULL;
	int min;

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		ptr = malloc(new_size);

	if (new_size == old_size)
		return (ptr);

	newData = malloc(new_size);

	if (newData == NULL)
		return (NULL);

	if (new_size > old_size)
		min = (int16_t) old_size;
	else
		min = (int16_t) new_size;

	memcpy(newData, ptr, min);
	free(ptr);

	return (newData);
}
