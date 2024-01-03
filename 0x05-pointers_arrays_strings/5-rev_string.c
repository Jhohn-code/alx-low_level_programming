#include "main.h"

/**
 * rev_string - reverse a string
 * @s: a pointer
 */

void rev_string(char *s)
{
	int i, j;

	for (i = 0; s[i] != 0; i++)
	{
	}

	for (j = i -1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	_putchar('\n');
}
