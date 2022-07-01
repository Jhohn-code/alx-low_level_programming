#include <stdlib.h>
#include <time.h>
/* more headers goes there */

#include <stdio.h>

/* betty style doc for function main goes there */

/**
 * main - assigns a random number to int n everytime
 * it executes, and prints it
 * Return: Always 0 (Success)
 * main - assign a random number to int
 * int- This is the main integer
 * if - define it
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
	printf("This number: %d is positive\n", n);
	} else if (n == 0)
	{
	printf("This number: %d is zero\n", n);
	} 
	else 
	{
	printf("This number: %d is negative\n", n);
	}
	return (0);
}
