#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints both lowercase and uppercase letters of the alphabet
 *
 * Return: 0 (success)
 */
int main(void)
{
	int lowercase = 97;
	int uppercase = 65;

	while (lowercase <= 122)
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 90)
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');
	return (0);
}
