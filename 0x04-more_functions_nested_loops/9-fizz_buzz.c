#include <stdio.h>
#include "main.h"

/**
* main - check the code
* prints the numbers from 1 to 100, followed by a new line
* multiples of three print Fizz instead of the numbers
* multiples of five print Buzz
* multiples of both three and five print FizzBuzz
* Return: Always 0.
*/

int main(void)
{
	int num_S = 1;
	int num_B = 100;
	int i;

	for (i = num_S; i  <= num_B; i++)
	{
		if (i % 15 == 0)
		printf("FizzBuzz");
		else if (i % 3 == 0 && !(i % 5 == 0))
		printf("Fizz");
		else if (i % 5 == 0 && !(i % 3 == 0))
		printf("Buzz");
		else
		printf("%d", i);
		printf(" ");
	}
	printf("\n");
	return(0);
}
