#include <stdio.h>

void __attribute__((constructor)) begin(void);

/**
 * begin - write a string before the main function start
 */

void begin(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}

