#include <stdio.h>

void beforemain(void) __attribute__ ((constructor));

/**
  * beforemain - ...
  *
  * Return: Nothing.
  */
void beforemain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
