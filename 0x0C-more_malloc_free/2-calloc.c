#include "holberton.h"
/**
 * _calloc - should allocate memory and set it to zero
 * @nmemb: number of indeces
 * @size: size of indices
 * Return: a pointer to the memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *p;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (!p)
		return (NULL);

	for (i = 0; i <= nmemb; i++)
	{
		p[i] = 0;
	}
	return (p);

}
