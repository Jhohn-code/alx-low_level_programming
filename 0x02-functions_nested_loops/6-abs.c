#include "main.h"

/**
 * _abs - computes absolute value of an integer
 * Return: 0 if executed properly, non zero otherwise
 */

int _abs(int r)
{
	if (r < 0)
	{
		return (r * (-1));
	}

	return (r);
}
