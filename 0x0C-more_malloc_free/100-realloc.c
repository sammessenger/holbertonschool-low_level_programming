#include "holberton.h"
/**
 * _realloc - should reallocate memory block
 * @old_size - size of old memory block
 * @new_size - size of new memory block
 * Return: pointer to memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *nptr;
	unsigned int i;

	char *holdptr = (char *)ptr;

	if (!ptr)
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	nptr = malloc(new_size);

	if (!nptr)
	{
		return (NULL);
	}

	for (i = 0; i < old_size && i < new_size; i++)
	{
		nptr[i] = holdptr[i];	
	}
	return (void *)(nptr);
}
