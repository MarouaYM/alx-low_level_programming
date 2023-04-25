#include "main.h"

/**
* main - Entry point
* Description: Print alphabet 10 times
* Return: always 0
*/

int print_alphabet_x10(void)
{
	int i, j;
	for (i = 1; i <= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}