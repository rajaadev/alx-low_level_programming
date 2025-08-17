#include "main.h"

/**
 * print_fibon_number - prints an unsigned long integer using _putchar.
 * Prints numbers with fixed width if part of a big number.
 * @high: the high part of the number (can be 0)
 * @low: the low part of the number
 * @print_full: if 1 print low part with leading zeros, else normal print
 */
void print_fibon_number(unsigned long high, unsigned long low, int print_full)
{
	unsigned long div = 100000000; /* Divisor for leading zeros */

	if (high > 0)
	{
		print_fibon_number(high, 0, 0);
		while (div > 0)
		{
			_putchar((low / div) % 10 + '0');
			div /= 10;
		}
	}
	else
	{
		if (print_full)
		{
			while (div > 0)
			{
				_putchar((low / div) % 10 + '0');
				div /= 10;
			}
		}
		else
		{
			if (low / 10)
				print_fibon_number(0, low / 10, 0);
			_putchar((low % 10) + '0');
		}
	}
}

/**
 * main - prints first 98 Fibonacci numbers starting with 1 and 2,
 * separated by a comma and space, followed by a new line.
 *
 * Return: 0 success
 */
int main(void)
{
	unsigned long f1h = 0, f1l = 1;
	unsigned long f2h = 0, f2l = 2;
	unsigned long sumh, suml;
	int count;

	print_fibon_number(0, f1l, 0);
	_putchar(',');
	_putchar(' ');
	print_fibon_number(0, f2l, 0);

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
		print_fibon_number(sumh, suml, (sumh > 0));

		f1h = f2h;
		f1l = f2l;
		f2h = sumh;
		f2l = suml;
	}
	_putchar('\n');
	return (0);
}

