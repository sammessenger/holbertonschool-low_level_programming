/**
 * main - should print 0-16 in hexadecimal
 *
 * Return: 0
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	for (i = 'a'; i <= 'f'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
