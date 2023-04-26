#include <stdio.h>

/**
* main - prints the first 98 Fibonacci numbers
*
* Return: always 0
*/

int main(void)
{
	int count;
	unsigned long x = 0, y = 1, sum;
	unsigned long x_h1, x_h2, y_h1, y_h2;
	unsigned long h1, h2;

	for (count = 0; count < 92; count++)
	{
		sum = x + y;
		printf("%lu, ", sum);
		x = y;
		y = sum;
	}
	x_h1 = x / 10000000000;
	x_h2 = y / 10000000000;
	y_h1 = x % 10000000000;
	y_h2 = y % 10000000000;
	for (count = 93; count < 99; count++)
	{
		h1 = x_h1 + y_h1;
		h2 = x_h2 + y_h2;
		if (x_h2 + y_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}
		printf("%lu%lu", h1, h2);
		if (count != 98)
			printf(", ");
		x_h1 = y_h1;
		x_h2 = y_h2;
		y_h1 = h1;
		y_h2 = h2;
	}
	printf("\n");
	return (0);
}
