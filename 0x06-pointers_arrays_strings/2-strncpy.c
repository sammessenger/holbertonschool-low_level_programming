/**
 * _strncpy - should cpy a stryng
 * @dest: destination string
 * @src: source string
 * @n: bytes to print
 * Return: pointer to dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	char *c = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	dest = '\0';

	return (c);

}
