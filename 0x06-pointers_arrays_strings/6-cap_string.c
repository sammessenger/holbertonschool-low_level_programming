#include "holberton.h"
/**
 * cap_string - capitalize every word in a string
 * @c: pointer to first element in string
 * Return: pointer to first element in string
*/
char *cap_string(char *c)
{
	int i = 0;
	int a = 0;

	char arr[14] = { ',', ';', '.', '!', '?', '\"', '(', ')', '{', '}', ' ', '\n', '\t', '\0' };

	while (c[i])
	{
		while (arr[a])
		{
			if (c[i] == arr[a])
			{
				if (c[i + 1] >= 97 && c[i + 1] <= 122)
				{
					c[i + 1] -= 32;
				}
			}
			a++;
		}
		i++;
		a = 0;
	}
	return (c);
}
