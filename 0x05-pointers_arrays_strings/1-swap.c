#include "main.h"

/**
 * Swaps the values of two integers using pointers.
 *
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
