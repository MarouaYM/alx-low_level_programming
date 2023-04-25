#include "main.h"

/**
* main - Entry point
* Description: Print last digit
* Return: last digit
*/

int print_last_digit(int n)
{
	int l;
	l = n % 10;
	if (l < 0)
	{
		_putchar(-1 + 48);
		return (-l);
	}
	else
	{
		_putchar(1 + 48);
		return (l);
	}
	_putchar('\n');
}

