/**
 * _strpbrk - should search a string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to check for
 * Return: pointer to the first byte that matches
*/
#include <stddef.h>
char *_strpbrk(char *s, char *accept)
{
	int scount = 0;
	int acount = 0;
	int i;
	int a;
	char *ret;

	while (s[scount])
	scount++;

	while (accept[acount])
	acount++;

	for (i = 0; i < scount; i++)
	{
		for (a = 0; a < acount; a++)
		{
			if (s[i] == accept[a])
			{
				ret = s + i;
				return (ret);
			}
		}
	}
	return (NULL);
}
