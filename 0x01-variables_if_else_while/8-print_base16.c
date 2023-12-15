#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: 0 if executed properly, non zero otherwise
 */

int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		if (n < 10)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n - 10 + 'a');
		}
	}

	putchar('\n');

	return (0);
}
