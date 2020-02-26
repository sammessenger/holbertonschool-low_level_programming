/**
 * factorial - should return the factorial of n
 * @n: number to calculate
 * Return: factorial of n, or -1 if less than 0
*/
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (-1);
	}
	
}
