#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 * @n: the number to print.
 */
void print_number(int n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * main - computes & prints the sum of even Fibonacci numbers up to 4,000,000
 * Return: Always 0.
 */
int main(void)
{
	int prev = 1, curr = 2, next, sum = 2;

	while (1)
	{
		next = prev + curr;
		if (next > 4000000)
			break;

		if (next % 2 == 0)
			sum += next;

		prev = curr;
		curr = next;
	}

	print_number(sum);
	_putchar('\n');
	return (0);
}
