#include "main.h"
#include <stdio.h>

/**
* swap_int - swaps two int numbers
* @x: int input
* @y: int input
* Return: nothing
*/

void swap_int(int *x, int *y)
{
	int temp = *x;

	*x = *y;
	*y = temp;
}
