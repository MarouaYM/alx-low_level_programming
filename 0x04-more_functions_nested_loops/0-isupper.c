#include "main.h"

/**
* _isupper - if letter is upper
* @x: int number
* Return: 1 for upper and 0 for the rest
*/

int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	return (0);
}
