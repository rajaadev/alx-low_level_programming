#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints a quote by Dora Korpar
 * to standard output using putchar in a for loop
 * Return: Always 0 (Success)
 */

int main(void)
{
	char S[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

	int i;

	for (i = 0 ; S[i] != '\0' ; i++)
		putchar(S[i]);
putchar('\n');
return (0);
}
