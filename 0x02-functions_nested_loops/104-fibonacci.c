#include "main.h"

/**
 * print_fibon_number - prints an unsigned long integer using _putchar.
 * Prints numbers with fixed width if part of a big number.
 * @high: the high part of the number (can be 0)
 * @low: the low part of the number
 */
void print_fibon_number(unsigned long high, unsigned long low)
{
	unsigned long div = 100000000;

	if (high > 0)
	{
		/* Print high part normally */
		print_fibon_number(0, high);

		/* Print low part padded with leading zeros */
		while (div > 0)
		{
			_putchar((low / div) % 10 + '0');
			div /= 10;
		}
	}
	else
	{
		/* Print low part normally, without leading zeros */
		if (low / 10)
			print_fibon_number(0, low / 10);
		_putchar((low % 10) + '0');
	}
}

/**
 * main - prints the first 98 Fibonacci numbers
 *        starting with 1 and 2, separated by comma and space,
 *        followed by a new line.
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long f1h = 0, f1l = 1;
	unsigned long f2h = 0, f2l = 2;
	unsigned long sumh, suml;
	int count;

	print_fibon_number(0, f1l);
	_putchar(',');
	_putchar(' ');
	print_fibon_number(0, f2l);

	for (count = 3; count <= 98; count++)
	{
		suml = f1l + f2l;
		sumh = f1h + f2h;
		if (suml >= 1000000000)
		{
			sumh += 1;
			suml -= 1000000000;
		}

		_putchar(',');
		_putchar(' ');
		print_fibon_number(sumh, suml);

		f1h = f2h;
		f1l = f2l;
		f2h = sumh;
		f2l = suml;
	}
	_putchar('\n');
	return (0);
}
