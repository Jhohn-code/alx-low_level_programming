#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: a pointer
 */

void print_rev(char *s)
{
	int i;

	for (i = *s; i <= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
