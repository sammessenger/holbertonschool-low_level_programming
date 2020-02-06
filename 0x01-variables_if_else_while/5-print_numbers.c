/**
 * main - should print 0-9
 *
 * Return: should be null
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);

	putchar('\n');

	return (0);
}
