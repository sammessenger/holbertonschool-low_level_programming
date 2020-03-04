#include "holberton.h"
/**
 * str_concat - should concantenate two strings
 * @s1: first string
 * @s2: second string
 * Return: a pointer to the concantenated string
*/
char *str_concat(char *s1, char *s2)
{
	
	int i, a, b;
	int c = 0;
	
	char *p;

	for (i = 0; s1[i]; i++)
	;

	for (a = 0; s2[a]; a++)
	;


	p = malloc(((a + i) * sizeof(char*)) + 1);

	if (!p)
	return (NULL);

	for (b = 0; b < i; b++)
	{
		p[b] = s1[b];
	}
	for (; b < a + i; b++, c++)
	{
		p[b] = s2[c];
	}
	return (p);
	

	if (s2)
	return (s1);

	else
	return (NULL);

}
