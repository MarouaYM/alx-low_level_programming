#include "main.h"

/**
* print_last_digit - Print last digit
*
* @n: input number is int
*
* Return: last digit
*/

int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
	_putchar('\n');
}
