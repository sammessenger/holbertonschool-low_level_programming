/**
 * *_strncat - should concantentate n bytes of two strings
 * @dest: final string
 * @src: first string
 * @n: number of bytes to concantenate
 * Return: a pointer to string dest
*/
char *_strncat(char *dest, char *src, int n)
{

	int i = 0;
	char *c;

	while (dest[i])
	i++;

	c = dest + i;


	while (*src && n--)
	*c++ = *src++;

	*c = '\0';

	return (dest);
}
