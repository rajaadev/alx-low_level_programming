#include "main.h"
/**
 * _isdigit - cheks if input character is a digit between 0 - 9
  *@c : the character to check
 *
 * Return: 1 if c digit, 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
