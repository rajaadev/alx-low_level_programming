#include "main.h"
/**
 * print_diagonal - print a diagonal  line
 * @n : is the number of times the \ character
 * should be printed
 */

void print_diagonal(int n)
	{
	int position_n, space;

	if (n <= 0)
	{	
	_putchar('\n');
	}	
	else
	{	
		for (position_n = 1; position_n  <= n; position_n++)
		{
			for (space = 1; space <= position_n; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
