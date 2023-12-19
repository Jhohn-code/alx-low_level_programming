#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @l: character to be assessed
 * Return: 0 if executed properly, non zero otherwise
 */

int print_last_digit(int l)
{
	int r;

	if (l < 0)
	{
		l = -l;
	}

	r = l % 10;

	if (r < 0)
	{
		r = -r;
	}

	_putchar(r + '0');

	return (r);
}
