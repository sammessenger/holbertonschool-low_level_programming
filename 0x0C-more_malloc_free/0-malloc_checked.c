#include "holberton.h"
/**
 * malloc_checked - should allocate memory
 * @b: memory to allocate
 * Return: pointer to memory
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(INT_MAX);
	
	if (!p)
		exit(98);

	return(p);

}
