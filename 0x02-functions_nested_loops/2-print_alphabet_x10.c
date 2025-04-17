#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times
 * the alphabet, in lowercase, followed by a new line.
 *
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 0;

	while (i < 10)
	{
		ch = 'a';
		for (ch = 'a'; ch <= 'z'; ch++)
		{
		_putchar(ch);
		}
	_putchar('\n');
	i++;
	}
}
