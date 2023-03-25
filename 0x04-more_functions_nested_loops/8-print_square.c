#include "main.h"
/**
 * print_square - print a square using the caracter #
 * @size : is the size of the square
 *
 * Return : always 0 (success)
 */

void print_square(int size)
{
	int row, column;

	if (size  <= 0)
		_putchar('\n');
	for (row = 1; row  <= size; row++)
	{
		for (column = 1; column <= size; column++)
			_putchar('#');
		_putchar('\n');
	}
}
