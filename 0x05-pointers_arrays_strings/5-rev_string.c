/**
 * rev_string - should reverse a string
 * @s: string to be reversed
 * Return: void
*/
#include "holberton.h"
#include <stdio.h>

void rev_string(char *s)
{
	int i, a;
	char *rev;

	a = 0;
	i = 0;

	while (s[i])
	i++;

	rev = s + i + 1;

	for (a = 0; a < i; a++)
	{
		rev[a + 1] = s[a];
	}
	for (a = 0; i > 0; i--, a++)
	{
		s[a] = rev[i];
	}
}
