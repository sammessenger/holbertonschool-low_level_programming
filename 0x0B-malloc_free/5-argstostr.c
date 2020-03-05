#include "holberton.h"
/**
 * argstostr - should concatenate all the arguements
 * @ac: count of arguments
 * @av: double pointer to list of arguments
 * Return: should be pointer to new strig
*/
char *argstostr(int ac, char **av)
{
	int a, i, c = 0;
	char *p;

	if (!ac || !av)
		return (NULL);

	for (i = ac; i > 0; i--)
	{
		a = 0;
		while(av[i][a])
		{
			a++;
			c++;
		}
	}
	p = malloc((sizeof(char) * c) + 1);

	for (i = 0, c = 0; i < ac; i++)
	{
		for (a = 0; av[i][a]; a++, c++)
		{
			p[c] = av[i][a];
		}
	}
	return (p);
}
