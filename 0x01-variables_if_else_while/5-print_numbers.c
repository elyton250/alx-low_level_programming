#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints base 10 numbers from 0 to 9
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");

	return (0);
}

