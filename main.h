#ifndef MAIN_HEADER
#define MAIN_HEADER

#include <stdio.h>

int _putchar(char c);
int _printf(const char *format, ...);





int _putchar(char c)
{
	return (write(1, &c, 1));
}


#endif
