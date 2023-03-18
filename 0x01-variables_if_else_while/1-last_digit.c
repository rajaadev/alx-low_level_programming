#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -  Entry point of the program
 * This function is the entry point
 * of the program and is responsible for
 * starting the execution of the program
 * It initializes any necessary resources
 * and then calls other functions as needed.
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10;
	if (ld > 5)
	{
	printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
	printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}
