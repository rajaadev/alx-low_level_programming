#include "main.h"
/**
 * times_table - a function that prints the 9 times table,
 * starting with 0.
 * @i & @j: elements from 0 to 9  of table.
 */

void times_table(void)
{
int i, j;
int r;

for (i = 0; i <= 9; i++)
	{
	for (j = 0; j <= 9; j++)
	{
		r = i * j;
		if (r >= 10)
		{
			_putchar(r / 10 + '0');
			_putchar(r % 10 + '0');
		}
		else
		{
			_putchar(' ');
			_putchar(r + '0');
		}
		if (j < 9)
		{
			_putchar(',');
			_putchar(' ');
		}
		else
			_putchar('\n');
	}
	}
}
