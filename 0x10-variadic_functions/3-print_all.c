#include <stdarg.h>
#include <stdio.h>
/**
  *print_all - prints anything
  *@format: contains types
  */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;

	va_start(args, format);

	while (format && format[i])
	{
		if (i > 0)
			printf(", ");
		if (format[i] == 'c')
		{
			printf("%c", va_arg(args, int));
		}
		else if (format[i] == 'i')
		{
			printf("%d", va_arg(args, int));
		}
		else if (format[i] == 'f')
		{
			printf("%f", va_arg(args, double));
		}
		else if (format[i] == 's')
		{
			printf("%s", va_arg(args, char *));
		}

		i++;
	}

	va_end(args);

	printf("\n");
}

