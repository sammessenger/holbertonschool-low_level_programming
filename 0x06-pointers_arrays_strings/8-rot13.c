/**
 * rot13 - should convert a string to rot13
 * @s: pointer to first element of string
 * Return: should be pointer to first element of string
*/
char *rot13(char *s)
{
	char arr[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0";
	char com[53] = "nopqrstuvwxyzabcdefghijklmNOPQRSTYVWXYZABCDEFGHIJKLM\0";
	int i = 0;
	int a = 0;

	while (s[i])
	{
		while (arr[a])
		{
			if (s[i] == arr[a])
			{
				s[i] = com[a];
				break;
			}
			a++;
		}
		i++;
		a = 0;
	}
	return (s);

}
