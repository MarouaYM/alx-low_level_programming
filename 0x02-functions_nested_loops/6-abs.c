#include "main.h"

/**
* _abs - Print absolute value of an int
*
* @i: input number is an int
*
* Return: absolute value
*/

int _abs(int i)
{
	if (i >= 0)
	{
		return (i);
	}
	else
	{
		return (i * -1);
	}
	_putchar('\n');
}
