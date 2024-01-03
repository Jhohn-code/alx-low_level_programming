#include "main.h"

/**
 * rev_string - reverse a string
 * @s: a pointer
 */

void rev_string(char *s)
{
	int i, j, len;
	char tmp;

	for (len = 0; s[len] != 0; len++)
	{
	}

	i = len - 1;

	for (j = 0; j < len / 2; j++)
	{
		tmp = s[j];
		s[j] = s[i];
		s[i--] = tmp;
	}
}
