/**
 * _memcpy - copies memory aread
 * @dest: copy memory to
 * @src: copy memory from
 * @n: bytes to copy
 * Return: a pointer to dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n--)
	{
	*(dest + i) = *(src + i);
	i++;
	}
	return (dest);

}
