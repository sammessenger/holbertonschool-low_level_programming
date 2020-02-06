#include <stdio.h>
#include <stdlib.h>
/**
 * main - should print alphabet except q and e
 *
 * Return: should be null
*/
int main (void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i != 'q' && i != 'e')
			putchar(i);
	}
	putchar('\n');
	return (0);
}
