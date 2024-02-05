#include "search_algos.h"

/**
 * linear_search - searches for a value in an array
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to search
 * Return: -1 on failure or not found, and the index if the value is found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (value == array[i])
		{
			return (i);
		}
	}
	return (-1);
}
