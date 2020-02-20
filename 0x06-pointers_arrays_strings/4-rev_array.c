/**
 * reverse_array - should reverse an array of ints
 * @a: pointer to first element of array
 * @n: number of elements in an array
 * Return: void
*/
void reverse_array(int *a, int n)
{
	int i;
	int b = 0;
	int z = n - 1;

	for (; b < z; b++, z--)
	{
		i = a[b];
		a[b] = a[z];
		a[z] = i;
	}
}
