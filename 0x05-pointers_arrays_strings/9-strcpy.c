/**
 * *_strcpy - should copy src to dest
 * @src: source string
 * @dest: destination string
 * Return: a pointer to dest
*/
char *_strcpy(char *dest, char *src)
{
	int i, a;

	i = 0;

	while (src[i])
	i++;

	for (a = 0; a <= i; a++)
	dest[a] = src[a];

	return dest;

}
