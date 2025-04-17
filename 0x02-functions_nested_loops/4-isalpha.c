#include "main.h"

/**
 * _isalpha - function that checks for alphabetics charachter.
 * @c : charater
 *
 * Return: 1 if c is alphabetic and 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);

}
