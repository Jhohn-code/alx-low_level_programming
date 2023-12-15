#include <stdio.h>
/**
 * main - Write a program that prints the alphabet in lowercase.
 * Return: 0 if executed properly, non zero otherwise
 */

int main(void)
{
	char i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
