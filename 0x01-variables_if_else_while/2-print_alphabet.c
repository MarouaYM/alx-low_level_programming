#include <stdio.h>
/**
*main - entry point
*Description : " I play what I call the alphabet game"
*Return: always 0 (success)
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
