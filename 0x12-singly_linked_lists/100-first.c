#include <stdio.h>

void __attribute__((constructor)) before_main(void);

/**
 * before_main - function that prints a string before the
 *               main function will be executed.
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
