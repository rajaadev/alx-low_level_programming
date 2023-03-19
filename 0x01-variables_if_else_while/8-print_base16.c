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
	int i;
	char hex[16] = "0123456789abcdef";

	for (i = 0 ; i < 16 ; i++)
	{
	putchar (hex[i]);
	}
	putchar ('\n');
	return (0);
}
