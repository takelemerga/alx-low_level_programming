#include "main.h"
#include <stdlib.h>

/**
  * _strdup - Duplicate a string
  * @str: the string to duplicate
  *
  * Return: the string duplicated
  */

char *_strdup(char *str)
{
	int i, j = 0;

	char *str2;

	if (str == NULL)
		return (NULL);
	while (str[j] != '\0')
	{
		j++;
	}
	str2 = malloc(sizeof(char) * j + 1);
	if (str2 == NULL)
	return (NULL);

	for (i = 0; i <= j; i++)
	{
		if (i != j)
			str2[i] = str[i];
		else
			str2[i] = '\0';
	}
	return (str2);
}
