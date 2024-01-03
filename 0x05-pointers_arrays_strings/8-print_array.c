#include "main.h"

/**
 * print_array - prints element of an array
 * @a: first pointer
 * @n: second pointer
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		} else
		{
			printf(", %d", a[i]);
		}
	}

	printf("\n");
}
