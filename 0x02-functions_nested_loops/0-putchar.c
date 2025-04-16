#include <stdio.h>
#include <unistd.h>

/**
 * main - prints "_putchar" followed by new line 
 *
 * return: Always 0.
 */

int _putchar(char c);

int main(void)
{
	int i;
	char str[]= "_putchar";

	for(i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
