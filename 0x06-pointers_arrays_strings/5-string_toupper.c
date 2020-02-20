#include "holberton.h"
/**
 * string_toupper - should make a string uppercase
 * @c: pointer to first element of string
 * Return: pointer to first element of string
*/
char *string_toupper(char *c)
{
	int i = 0;

	while (c[i])
	{
		if (c[i] >= 97 && c[i] <= 122)
		{
			c[i] -= 32;
		}
		i++;
	}
	return (c);


}
