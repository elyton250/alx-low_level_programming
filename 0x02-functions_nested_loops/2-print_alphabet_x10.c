#include "main.h"
/**
  *
  *
  *
  *
  */
void print_alphabet_x10(void);
{
	int a;
	int t;
	for (t = 10; t <= 122; t++;)
	{
		for (a=97; a<=122; a++;)
		{
			_putchar(a);
		}
		_putchar("\n");
	}
}
