#include <unistd.h>

/**
 * @c: The character to print
 * Return: 1
 * Error, -1 is returned, and errno is set.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
