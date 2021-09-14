#include "main.h"
/**
 * _strstr - locate string
 * @haystack: input string
 * @needle: input needles
 *
 * Description: locates a substring
 * Return: returns a pointer to the
 * beginning of the located substring, else, NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay, *nee;

	while (*haystack)
	{
		nee = needle;
		hay = haystack;
		int started = 0;

		while (*nee && *haystack == *nee)
		{
			started = 1;
			haystack++;
			nee++;
			if (!*nee)
			{
			return (hay);
			}
		}
		if (started == 0)
		{
			haystack++;
		}
	}
	return (0);
}
