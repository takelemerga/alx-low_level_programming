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
/**
* _strcat - returns the concatenated string pointer
*@dest: dest holds base adress of dest array
*@src: src holds base adress of src string
*Return: pointer
*/
char *_strcat(char *dest, char *src)
{
	int i, j;

	j = _strlen(dest);
	i = 0;
	while (src[i] != '\0')
	{
	dest[i + j] = src[i];
	i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
