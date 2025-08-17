#include "main.h"

/**
 * print_fibon_number - prints an unsigned long int number using _putchar.
 * Limits recursion depth to avoid stack overflow on very large numbers.
 * @high: high part (can be 0)
 * @low: low part
 * @print_full: print low with leading zeros if 1, else normal
 */
void print_fibon_number(unsigned long high, unsigned long low, int print_full)
{
	static int depth;
	unsigned long div = 100000000;

	if (high > 0)
	{
		if (depth++ < 10) /* recursion depth limit */
			print_fibon_number(high, 0, 0);
		while (div > 0)
		{
			_putchar((low / div) % 10 + '0');
			div /= 10;
		}
		depth--;
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
			{
				if (depth++ < 10)
					print_fibon_number(0, low / 10, 0);
				depth--;
			}
			_putchar((low % 10) + '0');
		}
	}
}

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

	for (count = 3; count <= 92; count++) /* safe limit */
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

