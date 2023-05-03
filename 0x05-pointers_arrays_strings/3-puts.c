#include "main.h"
#include <stdio.h>

/**
* _puts - Print a string
* @str: string input
* Return: void
*/

void _puts(char *str)
{
	for (; *str != '\0'; str++)
	_putchar(*str);
	_putchar('\n');
}
