#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char n, ch;

	for (n = 1; n <= 10; n++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}

	/**	_putchar('\n');*/
}
