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


	while (*haystack != '\0')
	{
		nee = needle;
		hay = haystack;
		int started = 0;

		while (*nee != '\0' && *hay != '\0' && *haystack == *nee)
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
	if (*haystack == '\0' && started == 0)
		return (0);
	}
	return (0);
}
