#include "main.h"

/**
 * get_endianness - return the endianness of the system
 * Return: 0 for big, 1 for small one
 */
int get_endianness(void)
{
unsigned long int num = 1;

return (*(char *) &num == 1);
}
