/**
 * _strlen - should find length of string
 * @s: string to be counted
 * Return: length of string
*/
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
	{
		i++;
	}
	return (i);
}
