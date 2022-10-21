#include "main.h"

/**
* main - print fizzbuzz
* Return: Always 0
*/
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%n", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
