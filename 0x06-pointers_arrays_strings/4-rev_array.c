#include "main.h"

/**
* reverse_array - reverse content of array
* @a: array of int
* @n : number of elements
* Return: Pointer
*/

void reverse_array(int *a, int n)
{
	int index, tmp;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
