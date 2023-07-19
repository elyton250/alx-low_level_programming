#include "main.h"

/**
* largest_number - Find the largest of three integers.
* @a: The first integer.
* @b: The second integer.
* @c: The third integer.
*
* Return: The largest integer among a, b, and c.
*/
int largest_number(int a, int b, int c)
{
	int largest = a;

	if (b > largest)
	{
		largest = b;
	}
	if (c > largest)
	{
		largest = c;
	}
	return (largest);
}
