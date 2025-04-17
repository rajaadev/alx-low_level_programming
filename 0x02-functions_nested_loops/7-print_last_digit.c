#include "main.h"
#include <limits.h>
/**
 * print_last_digit - function  prints the last digit of a number.
 * @n: number to extract last digit
 * Return: last digit du n.
 */
int print_last_digit(int n)
{
	unsigned int last_digit;

	if (n < 0)
		last_digit = (unsigned int)(-(n + 1)) + 1;
	else
		last_digit = (unsigned int)n;

	last_digit = last_digit % 10;

	_putchar(last_digit + '0');
	return (last_digit);
}
