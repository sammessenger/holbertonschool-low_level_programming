/**
 * main - should print 0-99
 *
 * Return: null
*/
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;
	int a;

	for (i = 48; i <= 57; i++)
	{
		for (a = 48; a <= 57; a++)
		{
			putchar(i);
			putchar(a);

			if (a != 57 || i != 57)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
