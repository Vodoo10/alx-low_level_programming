#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...)
{
	int i = 0;
	char *c, *k = "";

	va_list a;

	va_start(a, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", k, va_arg(a, int));
					break;
				case 'i':
					printf("%s%d", k, va_arg(a, int));
					break;
				case 'f':
					printf("%s%f", k, va_arg(a, double));
					break;
				case 's':
					c = va_arg(a, char *);
					if (!c)
						c = "(nil)";
					printf("%s%s", k, c);
					break;
				default:
					i++;
					continue;
			}
			k = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(a);
}

