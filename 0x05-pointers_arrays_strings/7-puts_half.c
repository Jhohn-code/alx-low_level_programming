#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: a string
 */

void puts_half(char *str)
{
	int i, len;

	for (len = 0; str[len] != 0; len++)
	{
	}

	if (len % 2 == 0)
	{
		for (i = len / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (len % 2)
	{
		for (i = (len - 1) / 2; i < len - 1; i++)
		{
			_putchar(str[i + 1]);
		}
	}
	_putchar('\n');
}
