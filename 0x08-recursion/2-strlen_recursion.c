#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
int long_str = 0;

if (*s)
{
long_str++;
long_str = long_str + _strlen_recursion(s + 1);
}
return (longit);
}
