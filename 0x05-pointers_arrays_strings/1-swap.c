#include "main.h"
/**
* swap_int - swaps the value of two integers
* @m: pointer m
* @n: pointer n
*/
void swap_int(int *m, int *n)
{
	int temp;

	temp = *m;
	*m = *n;
	*n = temp;
}
