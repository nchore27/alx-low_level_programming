#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter on
 * each element of an array.
 * @array: the input array
 * @size: How is large of the array.
 * @action: the input function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t x;

	if (array == NULL || action == NULL)
		return;
	for (x = 0; x < size; ++x)
	{
		action(array[x]);
	}
}
