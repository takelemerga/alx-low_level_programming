#include "tola.h"
/**
*main - prints Holberton
*Return: 0
*/
int main(void)
{
	char c[10] = "Holberton";
	int j = 0;

		while (j < 9)
		{
			_putchar(c[j]);
			j++;
		}
	_putchar('\n');
	return (0);
}
