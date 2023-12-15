#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - assign a random number to the variable n each time it is executed.
 * Return: 0 if executed properly, non zero otherwise
 */
int main(void)
{
	int n, digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	digit = n % 10;
	if (digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, digit);
	}

	else if (digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, digit);
	}

	else if (digit < 6 || digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, digit);
	}
	return (0);
}
