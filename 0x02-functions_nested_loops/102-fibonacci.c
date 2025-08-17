#include "main.h"

/**
 * print_number - prints an integer using _putchar.
 * @n: the number to print.
 */
void print_number(unsigned long n)
{
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * main - prints the first 50 Fibonacci numbers starting with 1 and 2,
 * separated by comma and space, followed by a newline.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long fib1 = 1, fib2 = 2, next;
	int count;

	print_number(fib1);
	_putchar(',');
	_putchar(' ');
	print_number(fib2);

	for (count = 3; count <= 50; count++)
	{
		next = fib1 + fib2;
		_putchar(',');
		_putchar(' ');
		print_number(next);
		fib1 = fib2;
		fib2 = next;
	}

	_putchar('\n');
	return (0);
}
