#include "main.h"

/**
 * binary_to_uint - function takes a binary to an unsigned int.
 * @b: The pointer to a string of 0 and 1 chars.
 *
 * Return:the unsigned converted number from base 2 to 10.
 * 0 in case b is Null or contains one or more
 * chars =! to 0 or 1.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		number = number * 2 + (*b++ - '0');
	}
	return (number);
}
