#include "main.h"

/**
* string_toupper - changes lowwercase to uppercase
* @str: string
* Return: pointer
*/

char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
		index++;
	}
	return (str);
}

