#include "main.h"
#include <stdio.h>

/**
* puts_half - prints half of a string
* @str: string input
* Return: void
*/

void puts_half(char *str)
{
	int i, j = 0;

	while (str[j] != '\0')
	j++;
	if (j % 2 == 1)
	{
		i = (j - 1) / 2;
		i += 1;
	}
	else
	{
		i = j / 2;
	}
	for (; i < j; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
