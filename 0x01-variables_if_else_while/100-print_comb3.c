#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: 0 if executed properly, non zero otherwise
 */

int main(void)
{
	int n,j;

	for (n = 48; n <= 56; n++)
	{
		for (j = n + 1; j <= 57; j++)
		{
			putchar(n);
			putchar(j);
			if (n != 56 && n != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);

}
