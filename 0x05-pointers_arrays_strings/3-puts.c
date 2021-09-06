#include "main.h"
/**
 * _puts - prints a string followed by a new line to stdout
 * @c:pointer to base address
 */
void _puts(char *c)
{
	while (*c != '\0')
	{
	_putchar(*c);
	c++;
	}
_putchar('\n');
}
