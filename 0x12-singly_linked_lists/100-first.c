#include <stdio.h>

/**
 * before_main - Constructor function executed before main
 *
 * Description: This function is executed automatically before the main
 * function is called. It prints two lines of text using the puts function.
 */
void __attribute__((constructor)) before_main()
{
	const char *line1 = "You're beat! and yet, you must allow,";
	const char *line2 = "I bore my house upon my back!";

	puts(line1);
	puts(line2);
}
