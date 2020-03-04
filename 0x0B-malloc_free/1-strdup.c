#include "holberton.h"
/**
 * char *_strdup - should allocate space, then assign a string to it
 * @s: string to assign
 * Return: a pointer to the new space
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
	if (str[a] == '\0')
	p[a] = '\0';

	return (p);

}
