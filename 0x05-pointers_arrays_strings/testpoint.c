#include "holberton.h"
#include <stdio.h>

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6};
	int size = test_point(arr);
	printf("Number of elements in arr[] is %i\n", size);
	return (0);

}
int test_point (int *p)
{
	int size = *(&p + 1) - p;
	return (size);

}
