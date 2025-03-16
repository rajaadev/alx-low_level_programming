#include <stdio.h>
/**
 * main - Entry of the program
 *
 * Description: Thoses functions prints message
 * of size of types to stdout
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of a int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long: %zu byte(s)\n", sizeof(long));
	printf("Size of a long long: %zu byte(s)\n", sizeof(long long));
	printf("Size of a int: %zu byte(s)\n", sizeof(float));
return (0);
}
