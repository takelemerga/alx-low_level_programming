#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: copy destination
 * @src: copy source
 * @n: bytes to be copied
 * Return: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;

	while (n > j && src[j] != '\0')
	{
	dest[j] = src[j];
	j++;
	}
	while (j < n)
	{
	dest[j] = '\0';
	j++;
	}
return (dest);
}
