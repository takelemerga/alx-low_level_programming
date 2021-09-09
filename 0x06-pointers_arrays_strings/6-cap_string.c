#include "main.h"

/**
 * isLower - determines whether ascii is lowercase
 * @c: character
 * Return: 1 if true, 0 if false
 */
int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isDelimiter - determines whether ascii is a delimiter
 * @c: character
 * Return: 1 if true, 0 if false
 */

int isDelimiter(char c)
{
	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: input string
 * Return: string with capitalized words
 */
char *cap_string(char *s)
{
int i;

	i = 0;

	if (isLower(s[0]) == 1)
	{
		s[0] = s[0] - 32;
	}

	while (s[i] != '\0')
	{
		if (isDelimiter(s[i]) == 1)
		{
			if (isLower(s[i + 1]) == 1)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
