#include <stdio.h>
void before_main(void) __attribute((constructor));
/**
 * before_main - prints a message before the main function runs
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\nI ");
	printf("bore my house upon my back!\n");
}
