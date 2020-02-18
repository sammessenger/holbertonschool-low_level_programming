/**
 * swap_int - should swap the values of a and b;
 * @a: first int
 * @b: second int
 * Return: void
*/
void swap_int(int *a, int *b)
{
	int hold1, hold2;

	hold1 = *a;
	hold2 = *b;
	*a = hold2;
	*b = hold1;
}
