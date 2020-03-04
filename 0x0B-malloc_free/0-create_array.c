/**
 * create_array - should create an array of char initialized
 * @size: size of array
 * @c: char to initialize to
 * Return: a pointer to the array
*/
#include "holberton.h"
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *p = (malloc(size * sizeof(char)));

	if (!p)
	return (NULL);

	for (; i <= size; i++)
	{
		p[i] = c;
	}
	return (p);

}
