	/**
 * comp - compare two strings
 * @a: first string
 * @b: second string
 * Return: 0 or *b == '\0'
*/
#include <stddef.h>
int comp(char *a, char *b)
{
	while (*a && *b)
	{
		if (*a != *b)
		return (0);

		a++;
		b++;
	}
	return (*b == '\0');
}
/**
 * _strstr - locates a substring
 * @haystack: string to check
 * @needle: string to check for
 * Return: a pointer to the string
*/
char *_strstr(char *haystack, char *needle)
{
	if (!haystack || !needle)
	return (NULL);

	while (*haystack)
	{
		if (comp(haystack, needle))
		return (haystack);

		haystack++;
	}
	return (NULL);
}
