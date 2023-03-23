#include <unistd.h>
#include "main.h"

/**
 * _putchar -  writes the character c to stdout
 * @c : The character to print
 *
 * Return : return value of '_putchar' on success 0.
 * on error, -1 and errno is set.
 */
int _putchar(char c)
{
/* return value of '_putchar' 1 or -1.*/
	Return(write(1, &c, 1);
}
