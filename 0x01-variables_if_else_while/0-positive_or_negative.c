/*
 * File: 0-positive_or_negative.c
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main -  Prints a random number and states whether it is positive, negative, or zero. 
 *
 * Description: print value of n satus; zero, positive or negative
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*actual code*/
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%i is zero\n", n);
	else
		printf("%i is negative\n", n);

	return (0);
}
