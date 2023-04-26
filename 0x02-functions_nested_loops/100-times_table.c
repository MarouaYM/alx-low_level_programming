#include "main.h"

/**
* print_times_table - add two values
*
* @n: int number
*
* Return: last digit
*/

void print_times_table(int n)
{
	int x, multi, prod;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; n++)
		{
			_putchar('0');
			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');
				prod = x * multi;
				if (prod <= 99)
					_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
				if (prod <= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
