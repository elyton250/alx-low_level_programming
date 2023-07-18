#include "main.h"
/**
  *_isalpha: entrpoint
  *
  *@c: the character in ASCI code
  *
  *Return: 1 for letters; 0 for the rest
  */
int _isalpha(int c)
{
	if (c >=97 && c <= 122)
	{
		return(1)
	}
	else if (c >=65 && c <= 90)
	{
		return(1);
	}
	else
	{
		return(0);
	}
	_putchar("\n");
}
