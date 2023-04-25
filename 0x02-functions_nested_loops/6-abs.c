#include "main.h"

/**
* main - Entry point
* Description: Print absolute value of an int
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
