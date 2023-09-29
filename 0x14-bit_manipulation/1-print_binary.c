#include "main.h"

/**
 * print_binary - convert decimal number to binary and print it.
 * @number: number to print in binary
 */
void print_binary(unsigned long int number)
{
	if (number > 1)
	{
		print_binary(number >> 1);
	}
	printf("%lu", number & 1);
}
