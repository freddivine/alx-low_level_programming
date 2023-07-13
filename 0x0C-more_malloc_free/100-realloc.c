#include "main.h"

/**
 * _realloc - function
 * @ptr: param
 * @old_size: param
 * @new_size: param
 * Return: returns ptr
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	memcpy(new_ptr, ptr, (new_size > old_size) ? old_size : new_size);

	free(ptr);

	return (new_ptr);
}
