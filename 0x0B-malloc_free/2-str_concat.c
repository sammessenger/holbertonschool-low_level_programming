#include "holberton.h"
/**
 * str_concat - should concantenate two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concantenated string
*/
char *str_concat(char *s1, char *s2)
{

	int i, a, b, c;
	char *p;

	if (s1)
	{
		for (i = 0; s1[i]; i++)
			;
	}
	else
		i = 0;
	if (s2)
	{
		for (a = 0; s2[a]; a++)
			;
	}
	else
		a = 0;
	p = malloc((a + i + 1) * sizeof(*p));
	if (!p)
		return (NULL);
	if (s1)
	{
		for (b = 0; s1[b]; b++)
		{
			p[b] = s1[b];
		}
	}
	if (s2)
	{
		for (c = 0; s2[c]; b++, c++)
		{
			p[b] = s2[c];
		}
	}
	p[b] = '\0';

	return (p);
}
