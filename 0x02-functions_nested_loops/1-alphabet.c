#include "main.h"

/**
* main - Entry point
* Description: Print alphabet in lowercase
* Return: always 0
*/

int print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
