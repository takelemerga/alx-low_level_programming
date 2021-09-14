#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	unsigned int j = 0;

	while (j < n)
	{
		*dest++ = *src++;
		j++;
	}
	return (ptr);
}
