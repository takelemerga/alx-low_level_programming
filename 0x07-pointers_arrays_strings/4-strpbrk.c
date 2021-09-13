#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: bytes to be accepted
 * Return: pointer to be the byte that matches accept or NULL if not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		continue;
	}

	j = i;

	while (*s)
	{
		for (i = 0; i < j; i++)
			if (*s == accept[i])

				return (s);
		s++;
	}
	return (NULL);
}
