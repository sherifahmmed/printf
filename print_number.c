#include <stdio.h>
#include "main.h"

/**
 * print_number - prints an integer.
 * @n: the integer to prints.
 * Return: empty
 */

void print_number(int n)
{
	unsigned int n1;

	n1 = n;

	if (n < 0)
	{
		putchar('-');
		n1 = -n;
	}

	if (n1 / 10 != 0)
	{
		print_number(n1 / 10);
	}
	putchar((n1 % 10) + '0');
}
