#include "main.h"
#include <stdio.h>

/**
* _strlen - return length of string
* @s: string input
* Return: length
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
