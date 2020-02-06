/**
 * main - should print all combinations of single digit numbers
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
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
