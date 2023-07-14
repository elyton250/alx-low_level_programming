#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints digits using characters
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
		putchar('\n');
	}

	return (0);
}

