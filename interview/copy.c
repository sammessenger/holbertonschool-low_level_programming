#include <stdio.h>
char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\0');
	dest[i] = '\0';

	return (dest);
}
