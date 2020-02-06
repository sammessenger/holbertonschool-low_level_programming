/**
 * main - should print alphabet twice
 *
 * Return: null
*/


#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);

	 for (i = 'A'; i <= 'Z'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
