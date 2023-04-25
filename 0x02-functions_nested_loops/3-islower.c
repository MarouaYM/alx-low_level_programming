#include "main.h"

/**
* _islower - Print 1 if input is lowercase
*
* @c: caractere in ASCII code
*
* Return: 1 if lowercase and 0 if it's not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
