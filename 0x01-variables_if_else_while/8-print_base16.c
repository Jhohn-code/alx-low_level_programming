#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase.
 * Return: 0 if executed properly, non zero otherwise
 */

int main(void)
{
	int n, ch;
	
	for (n = 48; n >= 57; n++)
	{
		putchar(n);
	}

	for (ch = 97; ch >= 102; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
