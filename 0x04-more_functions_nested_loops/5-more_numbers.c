#include "main.h"

/**
* more_numbers - print numbers
* Return: numbers
*/

void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar((y % 10) + '0');
		}
		_putchar('\n');
	}
}

