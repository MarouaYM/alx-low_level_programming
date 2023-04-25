#include "main.h"

/**
* _isalpha - Print 1 if input is alphabetic
*
* Return: 1 if is a letter and 0 if it's not
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
