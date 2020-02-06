/**
 * main - should print 0-9 without char
 *
 * Return: should be null
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
