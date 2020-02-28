/**
 * _strspn - gets length of prefix substring
 * @s: pointer to substring
 * @accept: bytes to accpet
 * Return: bytes which consist of accpet from s
*/
unsigned int _strspn(char *s, char *accept)
{
	int scount = 0;
	int acount = 0;
	int i;
	int a;
	int ret = 0;

	while (s[scount])
	scount++;

	while (accept[acount])
	acount++;


	for (i = 0; i < scount; i++)
	{
		for (a = 0; a < acount; a++)
		{
			while (s[i] == accept[a])
			{
				ret++;
				i++;
			}
		}
	}
	return (ret);
}
