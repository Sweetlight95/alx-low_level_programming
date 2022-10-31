#include "main.h"

/**
* _memset -- function fill the first memory with constant value
* @s: buffer to be filled and return
* @b: constant value
* @n: bytes of the memory
* Return: change array with new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int index;

	for (index = 0; n > 0; index++)
	{
		s[index] = b;
		n--;
	}
	return (s);
}
