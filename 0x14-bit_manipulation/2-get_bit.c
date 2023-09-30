#include "main.h"

/**
 * get_bit - get a bit at an index
 * @n: number to index
 * @index: the bit to get
 *
 * Return: the bit or -1 on error
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 63)
return (-1);

return (n >> index & 1);
}
