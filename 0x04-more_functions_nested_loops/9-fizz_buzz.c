#include <stdio.h>
#include <stdlib.h>

void print_Fizz_Buzz( int num_S, int num_B );
/* function print_Fizz_Buzz declaration  prototype */

/**
* main - check the code
* void  print_Fizz_Buzz function declaration
* function print_Fizz_Buzz description -  prints
* the numbers between two parameters
* @num_S
* @num_B,
* followed by a new line
* multiples of three print Fizz instead of the numbers
* multiples of five print Buzz
* multiples of both three and five print FizzBuzz
* Return: Always 0.
* declaration , definition and affectation
*/
int main(void)
{
	
/*int num_S, num_B;
/*num_S = 0;*/
/*num_B = 100;*/
/* print_Fizz_Buzz */
/*print_Fizz_Buzz( 0 , 100 );*/

/*function print_Fizz_Buzz body description */

void print_Fizz_Buzz( int num_S, int num_B )
{
	int i;

	for (i = num_S; i <= num_B; i++)
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
	}
int num_S, num_B ;
/*num_S = 0;*/
/*num_B = 100;*/
/* print_Fizz_Buzz */
print_Fizz_Buzz( 0 , 100 );
return (0);
}
