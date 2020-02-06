/**
 * main - should be null
 *
 * Return: should be 0
*/
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
