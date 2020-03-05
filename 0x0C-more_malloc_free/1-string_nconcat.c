/**
 * string_nconcat - should concantenate two strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes from s2 to append to s1
 * @return: a pointer to the new string
*/
#include "holberton.h"
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, a = 0;
	unsigned int b = 0;
	char *p;

	while (s1[i])
	i++;

	p = malloc((i + n) * sizeof *s1);

	if (!p)
	return (NULL);

	for (a = 0; a <= i; a++)
	{
		p[a] = s1[a];
	}

	for (b = 0; b < n && s2[b]; b++, a++)
	{
		p[a] = s2[b];
	}
	return (p);

}
