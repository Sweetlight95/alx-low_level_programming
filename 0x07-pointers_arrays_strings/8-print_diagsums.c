#include "main.h"
#include <stdio.h>
/**
* print_diagsums - function that print the sum of the two diagonal of a
* square matrix of integer
* @a: pointer to 2d array
* @size: size x size of the square matrix
* Return: nothing
*/
void print_diagsums(int *a, int size)
{
	int i;
	int t1 = 0;
	int tr = 0;
	int s = size * size;

	for (i = 0; i < s; i += size + 1)
	{
		t1 += a[i];
	}

	for (i = size - 1; i < s - 1; i += size - 1)
	{
		tr += a[i];
	}

	printf("%d, %d\n", t1. tr);
}
