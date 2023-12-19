#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 * Return: 0 if executed properly, non zero otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
