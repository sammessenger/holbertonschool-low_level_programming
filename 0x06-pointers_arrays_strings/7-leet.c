/**
 * leet - should convert a string to 1337 speak
 * @s: pointer to first element of string
 * Return: should be pointer to first element of string
*/
char *leet(char *s)
{
	char arr[11] = "aAeEoOtTlL\0";
	char com[11] = "4433007711\0";
	int i = 0;
	int a = 0;

	while (s[i])
	{
		while (arr[a])
		{
			if (s[i] == arr[a])
			{
				s[i] = com[a];
			}
			a++;
		}
		i++;
		a = 0;
	}
	return (s);

}
