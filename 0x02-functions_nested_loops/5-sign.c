#include "main.h"
/**
  *
  *
  *
  *
  */
int print_sign(int n)
{
	while ( n > 0)
	{
		_putchar("\+");
		return (1);
	}
	while (n = 0)
	{
		_putchar("0");
		return (0);
	}
	while (n < 0)
	{
		_putchar("\-");
		return (-1);
	}
	_putchar("\n");
}
