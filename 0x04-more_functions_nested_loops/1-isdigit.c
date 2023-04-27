#include "main.h"

/**
* _isdigit - if letter is digit
* @x: int number
* Return: 1 for digit and 0 for the rest
*/

int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	return (0);
}
