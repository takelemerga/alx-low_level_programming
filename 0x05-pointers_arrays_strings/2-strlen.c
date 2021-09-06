#include "main.h"
/**
 * _strlen - returns the length of a string
 * @c: c is pointer that holds character array base adress
 * Return: length of string
 */
int _strlen(char *c)
{
	int length = 0;

	while (*c != '\0')
	{
		length += 1;
		c++;

	}
	return (length);
}
