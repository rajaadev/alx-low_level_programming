#include <stdio.h>
/**
 * main - Entry point of the program
 * This function is the entry point
 * of the program and is responsible for
 * starting the execution of the program.
 * It initializes any necessary resources
 * and then calls other functions as needed.
 * Return: 0 on success, non-zero on failure
 */
int main(void)
{
	char letter1 = 'a';

	while (letter1 <= 'z')
	{
	putchar(letter1);
	letter1++;
	}
	char letter = 'A';

	while (letter <= 'Z')
	{
	putchar(letter);
	letter++;
	}
	putchar('\n');
	return (0);
}
