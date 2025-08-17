#include "main.h"

/**
 * print_number - prints an integer using _putchar
 * @n: the number to print
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * main - computes and prints the sum of all multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
			sum += i;
	}

	print_number(sum);
	_putchar('\n');

	return (0);
}
