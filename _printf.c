#include <stdarg.h>
#include <main.h>
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
	while (format[i] != '\0')
	{
		if (format[i] == '%' && format[i + 1] == 'c')
		{
			_putchar(va_arg(args, int));
			out++;
			i++;
		}
		else if (format[i] == '%' && format[i + 1] == 's')
		{
			char *str = va_arg(args, char *);
			while (str[j] != '\0')
			{
				_putchar(str[j]);
				out++;
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			out++;
		}
		i++;
	}
	return (out);
}
