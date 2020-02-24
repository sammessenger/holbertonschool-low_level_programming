/**
 * _strchr - locate a character in a string
 * @s: string to check
 * @c: char to check for
 * Return: pointer to first occurrence of c in s, or NULL if none is found
*/
#include <stddef.h>
char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
		{
			return (s);
		}
		else if (*(s + 1) == c)
		{
			return (s + 1);
		}
	}
	return (NULL);
}
