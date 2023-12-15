#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers.
 * Return: 0 if executed properly, non zero otherwise
 */

int main(void)
{
	int n, j;

	for (n = 0; n < 100; n++)
	{
		for (j = 0; j < 100; j++)
		{
			if (n < j)
			{
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				putchar(' ');
				putchar((j / 10) + 48);
				putchar((j % 10) + 48);
				if (n != 98 || j!= 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');

	return (0);
}
