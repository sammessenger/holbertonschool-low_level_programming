#include "function_pointers.h"
/**
 * array_iterator - iterates through array performs an action on each element
 * @array: array to iterate through
 * @size: size of array
 * @action: function for the aciton to perform
 * return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}



}
