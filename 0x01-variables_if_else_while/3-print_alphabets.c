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
	char lowercase = 'a';
	char uppercase = 'A';

	while (lowercase <= 'z')
	{
	putchar(lowercase);
	lowercase++;
	}
	while (uppercase <= 'Z')
	{
	putchar(uppercase);
	uppercase++;
	}
	putchar('\n');
	return (0);
}
