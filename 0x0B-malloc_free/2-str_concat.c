#include "main.h"
#include <stdlib.h>

/**
  * str_concat - Concatenates two strings of any size
  * @s1: the first string to concatenate
  * @s2: the second string to concatenate
  *
  * Return: the two strings concatenated
  */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0;

	int size;

	char *s;

	if (s1 == NULL)
		s1 = "";
	else
		while (s1[i] != '\0')
			i++;

	if (s2 == NULL)
		s2 = "";
	else
		while (s2[j] != '\0')
			j++;
	size = i + j + 1;
	s = malloc(sizeof(char) * size);

	if (s == NULL)
	return (NULL);
	s = fun1(size, i, s, s1, s2);
	return (s);
}
/**
* fun1 - concatenate
*@size: size of two strings to be concatenated
*@i: size of the first string
*@s: pointer to s
*@s1: pointer to s1
*@s2: pointer to s2
*Return: pointer
*/

char *fun1(int size, int i, char *s, char *s1, char *s2)
{
	int j = 0, k = 0;

	while (k < size - 1)
	{
		if (k < i)
			s[k] = s1[k];

		if (k >= i)
		{
			s[k] = s2[j];
			j++;
		}

		k++;
	}

	s[k] = '\0';
	return (s);
}
