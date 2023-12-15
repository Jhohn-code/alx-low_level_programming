#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase.
 * Return: 0 if executed properly, non zero otherwise
 */

int main(void)
{
	int lc, hc;
	for (lc = 97; lc <= 122; lc++)
	{
		putchar(lc);
	}

	for (hc = 65; hc <= 90; hc++)
	{
		putchar(hc);
	}

	putchar('\n');

	return (0);
}
