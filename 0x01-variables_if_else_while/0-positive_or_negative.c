#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
* this represnt a test for if Statment in C
* also we will know more a bout generat random number
*
* main - Entry point
*
* Description: print value of n satus; zero, positive or negative
*
* Return: Always 0 (Success)
*/

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is positive\n", n);
	return (0);
}
