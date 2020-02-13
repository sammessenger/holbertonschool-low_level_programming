/**
 * _isupper - should check for uppercase  characters
 * @c: to be checked
 * Return: 1 if c is uppercase, 0 otherwise
*/
#include "holberton.h"
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
