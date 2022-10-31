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
	int diagonal1 = 0;
	int diagonal2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diagonal1 += a[i];
	}

	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diagonal2 += a[i];
	}
	printf("%d, %d\n", diagonal1, diagonal2);
}
