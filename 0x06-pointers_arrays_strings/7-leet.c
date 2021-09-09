#include "main.h"

/**
 * leet - encodes a string into 1337
 * @c: String
 * Return: string that is encoded
 */

char *leet(char *c)
{
	char *p = c;
	char letter[] = "aeotl";
	int value[] = {4, 3, 0, 7, 1};
	int i;

	while (*c)
	{
		for (i = 0; i < sizeof(letter) / sizeof(char); i++)
		{
			if (*c == letter[i] || *c == letter[i] - 32)
			{
				*c = 48 + value[i];
			}
		}
		c++;
	}

	return (p);

}
