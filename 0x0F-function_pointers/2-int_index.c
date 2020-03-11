#include "function_pointers.h"
/**
 * int_index - should search an array for an iteger
 * @array: array to search
 * @size: size of array
 * @cmp: comparison function
 * Return: index of first element where cmp does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;


	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
		return (-1);
	}
	return (-1);
}
