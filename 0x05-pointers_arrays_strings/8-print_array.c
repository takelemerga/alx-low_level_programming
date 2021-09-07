#include "main.h"
#include <stdio.h>
/**
 *print_array-prints n elments of array a
 *@a:an integer array
 *@n: number of elements to be printed
 *
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
	if (i != n - 1)
	printf("%d, ", *(a + i));
	else
	printf("%d", *(a + i));
	i++;
	}
printf("\n");
}
