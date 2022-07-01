#include <stdio.h>
/**
 * main  prints the alphabet in lowercase
 * except e and q
 * return: Always 0 success
 */

int main(void)
{
	char al = 'a';
	
	while (al <= 'z')
	{
		if (al != 'e' && al != 'q')
	{
		putchar(al);
	}
	al++;
	}
putchar('\n');
return (0);
}
