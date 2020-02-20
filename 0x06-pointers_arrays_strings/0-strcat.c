/**
 * *_strcat - should concantentate two strings
 * @dest: final string
 * @src: first string
 * Return: a pointer to string dest
*/
char *_strcat(char *dest, char *src)
{

	int i = 0;
	char *c;

	while (dest[i])
	i++;

	c = dest + i;


	while (*src)
	*c++ = *src++;

	*c = '\0';

	return (dest);
}
