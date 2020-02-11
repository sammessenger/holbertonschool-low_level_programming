/**
 * times_tables - should print the nine times table
 *
 * Return: should be null
*/
void times_tables(void)
{
	int i;
	int a;

	for (i = 0; i <= 9; i++)
	{
		for (a = 0; a <= 9; a++)
		{
			_putchar(i + a);
			_putchar (',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
