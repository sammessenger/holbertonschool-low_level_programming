/** * wildcmp - should compare two strings with wildcards
 * @s1: first string
 * @s2: second string
 * Return: should be 1 if identical
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	}
	if (*s2 == '*')
	{
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}
	return (0);
}
