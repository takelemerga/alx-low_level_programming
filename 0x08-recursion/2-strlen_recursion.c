#include "main.h"

/**
 * _strlen_recursion - calculates string len
 * @s: input string
 *
 * Return: returns string length
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
