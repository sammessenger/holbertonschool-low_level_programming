/**
 * _strlen_recursion - should return length of string
 * @s: string to check
 * Return: length of string
*/
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}

/**
 * pal_checker - checks for same character
 * @i: last index
 * @a: first index
 * @s: to be checked
 * Return: should recurr
*/
int pal_checker(int i, int a, char *s)
{
	if (s[a])
	{
		if (s[a] == s[i])
		return (1 + pal_checker(i - 1, a + 1, s));

		else
		return (0);
	}
	else
	return (0);

}

/**
 * is_palindrome - should check if a string is a palindrom
 * @s: string to check
 * Return: should be 1 if a string and 0 if not
*/
int is_palindrome(char *s)
{
	if(!*s)
	return (1);

	int i = _strlen_recursion(s) - 1;
	int a = 0;

	if (pal_checker(i, a, s))
	{
		return (1);
	}
	else
	return (0);
}
