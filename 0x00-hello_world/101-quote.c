#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints a quote by Dora Korpar
 * to standard output using write
 * Return: Always 0 (Success)
 */

int main(void)
{
	char S[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, S, sizeof(S) - 1);
	return (1);
}
