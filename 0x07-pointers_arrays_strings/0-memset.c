#include "main.h"

/**
* _memset - fills memory with a constant byte
* @s: input string (initial memory address)
* @b: constant byte
* @n: bytes size
* Return: returns pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (p);
}
