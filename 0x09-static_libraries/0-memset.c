/**
 * _memset - should fill memory with a constant byte
 * @s: memory area to fill
 * @b: byte to fill with
 * @n: amount of memory to fill
 * Return: pointer ot memory
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n--)
	{
	*(s + i) = b;
	i++;
	}
	return (s);
}
