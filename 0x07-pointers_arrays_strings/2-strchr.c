#include "main.h"
#include <stddef.h>
/**
* _strchr - function that locate a character in a string
* @s: string
* @c: charater
* Return: a pointer to the first occurrance of the character
*/
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; *(s + index); index++)
	{
		if (*(s + index) == c)
			return (s + index);
	}
	if (*(s + index) == c)
		return (s + index);
	return (0);
}
