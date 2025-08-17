#include "main.h"

/**
 * print_times_table - prints the n times table, starting from 0.
 * @n: size of the times table.
 *
 * Description: If n is less than 0 or greater than 15, does nothing.
 * Numbers are separated by comma and space, formatted for alignment.
 */
void print_times_table(int n)
{
	int i, j, product;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			product = i * j;

			if (j == 0)
			{
				print_number(product);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(' ');
					print_number(product);
				}
				else if (product < 100)
				{
					_putchar(' ');
					print_number(product);
				}
				else
				{
					print_number(product);
				}
			}
		}
		_putchar('\n');
	}
}

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

