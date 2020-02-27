/**
 * prime_checker - recuursively checks if a number is prime
 * @i: recursive iterator
 * @n: number to ccheck
 * Return: 1 if prime
*/
int prime_checker(int n, int i)
{
	if (n == 0 || n == 1)
	return (0);

	if (i == 1)
	return (1);

	else
	{
		if (n % i == 0)
		return (0);

		else
		return (prime_checker(n, i - 1));
	}
}
/**
 * is_prime_number - should determine if number is rpime
 * @n: number to check
 * Return: 1 if prime
*/
int is_prime_number(int n)
{
	if (n < 0)
	return (0);


	return (prime_checker(n, n / 2));
}
