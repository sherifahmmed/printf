#include <stdarg.h>
#include "main.h"
/* more headers goes there */

/**
 *_printf - a function
 *@format: char string
 *@...: arguments
 * Return: no. of characters
 */

int _printf(const char *format, ...)
{
	int i = 0, j = 0, out = 0;
	va_list args;

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			char *str = va_arg(args, char *);

			while (str[j] != '\0')
			{
				_putchar(str[j]);
				j++;
			}
			out = out - 1 + j;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == '%')
		{
			_putchar('%');
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'd')
		{
			print_number(va_arg(args, int));
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 'i')
		{
			print_number(va_arg(args, int));
			i++;
		}
		else
			_putchar(format[i]);
		out++;
		i++;
	}
	va_end(args);
	return (out);
}
