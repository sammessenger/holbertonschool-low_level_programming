/**
 * _isdigit - should check for digits
 * @c: to be checked
 * Return: 1 if c is digit, 0 otherwise
*/
#include "holberton.h"
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);

	else
		return (0);
}
