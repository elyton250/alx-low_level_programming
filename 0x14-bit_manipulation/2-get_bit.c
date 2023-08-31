#include "main.h"

/**
 * get_bit - return value  of a bit
 * @n: bit passed
 * @index: index of bit
 * Return: the value of the bit at index index or -1 if an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int val;

	if (index > 63)
		return (-1);
	val = (n >> index) & 1;
	return (val);
}

