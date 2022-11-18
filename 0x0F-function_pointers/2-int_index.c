#include "function_pointers.h"

/**
 * int_index - unction that searches for an integer.
 * @array: array of elemnts to search in
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 *
 * Return: if no element matches,size <= 0 return -1
 * else the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
