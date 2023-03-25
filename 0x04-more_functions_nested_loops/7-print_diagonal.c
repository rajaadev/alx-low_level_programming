#include "main.h"
/**
 * print_diagonal - print a diagonal  line
 * @n : is the number of times the \ character
 * should be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i  <= n; i++)
	{
		for (j = 1; j <= i; i++)
			_putchar(' ');
		_putchar(92);/* '\'*/
	}
}
