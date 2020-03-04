#include "holberton.h"
/**
 * char *_strdup - should allocate space, then assign a string to it
 *
 *
*/
char *_strdup(char *str)
{
	int a = 0;
	int i = 0;
	char *p;

	if (!str)
	return (NULL);

	while (str[i])
	i++;

	p = malloc(i * sizeof(char));

	if (!p)
	return (NULL);

	for (; a <= i; a++)
	{
		p[a] = str[a];
	}
	return (p);

}
