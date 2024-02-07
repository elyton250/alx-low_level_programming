#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using binary search
 * @array: the array to be searched
 * @size: the size of the array
 * @value: the value to search
 * Return: the index if the value is found, otherwise -1
 */

int binary_search(int *array, size_t size, int value)
{
	int *left_array, *right_array;
	int mid, i;
	size_t j;

	if (array == NULL || size == 0)
		return (-1);
	printf("Searching in array: ");
	for (j = 0; j < size; j++)
	{
		printf("%d", array[j]);
		if (j < size - 1)
			printf(", ");
	}
	printf("\n");

	mid = size / 2;

	if (array[mid] == value)
		return (mid);

	if (array[mid] > value)
	{
		left_array = array;
		return (binary_search(left_array, mid, value));
	}

	if (array[mid] < value)
	{
		right_array = array + mid + 1;
		i = binary_search(right_array, size - mid - 1, value);
		return (i == -1 ? -1 : mid + 1 + i);
	}

	return (-1);
}
