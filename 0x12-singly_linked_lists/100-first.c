#include <stdio.h>
/**
 * before - prints a sentence before the main
 * function is executed
 */
void before(void) __attribute__ ((constructor));

void before(void)
{
printf("You're beat! and yet, you must allow,\n");
printf("I bore my house upon my back!\n");
}
