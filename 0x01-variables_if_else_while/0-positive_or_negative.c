#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */

/**
 * int- This is the main integer
 * if - define it
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0){
	printf("This number: %d is positive\n");
	} else if (n=0){
	printf("This number: %d is zero\n");
	} else {
	printf("This number: %d is negative\n");
	}
	return (0);
}
