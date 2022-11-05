#include "main.h"
/**
* main - print the name of the program
* @argc: argument count
* @argv: argument
* Return: 0
*/
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);

	return (0);
}
