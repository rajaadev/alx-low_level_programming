#include "main.h"

/**
 * clear_bit - clears the bit at the index
 * @n: he number to index
 * @index: the bit to clear
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index >= sizeof(n) * 8)
{
return (-1);
}
*n &= ~(1UL << index);
return (1);
}

