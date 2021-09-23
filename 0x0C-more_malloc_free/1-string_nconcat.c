#include "main.h"

/**
*string_nconcat - concatenates strings
*@s1: pointer to the first string
*@s2: pointer to the second string
*@n: number of characters to be concatenated to s1
*Return: a pointer to the concatenated string memory address
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k, l1, l2, len;

	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	l1 = my_strlen(s1);

	l2 = my_strlen(s2);

	if (l2 <= n)
		len = l1 + l2;
	else
		len = l1 + n;

	ptr = malloc(sizeof(char) * len + 1);

	if (ptr == NULL)
		return (0);

	for (i = 0; i < l1; i++)
		ptr[i] = s1[i];

	for (j = i, k = 0; j < len; j++, k++)
		ptr[j] = s2[k];
	ptr[j] = '\0';

	return (ptr);
}
/**
*my_strlen - calculates string length
*@p: pointer to target string
*Return: number of charcters in a string
*/
unsigned int my_strlen(char *p)
{
	unsigned int count = 0;

	while (*p != '\0')
	{
		count++;
		p++;
	}
	return (count);
}
