#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: array of elemnts to apply action on
 * @size: size of the array
 * @action: pointer of function to call back
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || size > 0 || action == NULL)
		return;

	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
