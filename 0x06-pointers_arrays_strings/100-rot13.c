#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: input string
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i, j;

	char rot13[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char ROT13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	char *ptr = s;

	j = 0;

	while (s[j] != '\0')
	{
		for (i = 0; i <= 51; i++)
		{
			if (s[j] == rot13[i])
			{
				s[j] = ROT13[i];
				break;
			}
		}
		j++;
	}
	return (ptr);
}
