#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, followed by a new line
 * Return: 0 if executed properly, non zero otherwise
 */

int main(void)
{
	int ch;

	for (ch = 97; ch <=122; ch++)
	{
		if (ch != 101 && ch != 113)
		{
			putchar(ch);
		}
	}

	putchar('\n');

	return 0;
}
