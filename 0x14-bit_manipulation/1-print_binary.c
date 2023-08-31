#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number for printing a binary
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int binary;
	int a, count = 0;

	for (a = 63; a >= 0; a--)
	{
		binary = n >> a;

		if (binary & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count != 0)
			_putchar('0');
	}
	if (count == 0)
		_putchar('0');
}
