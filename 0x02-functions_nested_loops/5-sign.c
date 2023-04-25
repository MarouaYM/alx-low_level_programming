#include "main.h"

/**
* main - Entry point
* Description: if input number greater, less or equal to zero
* Return: 1 if greater, 0 if zero and -1 if less than zero
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
