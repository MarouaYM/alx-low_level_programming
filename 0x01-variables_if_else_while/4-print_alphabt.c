#include <stdio.h>
/**
*main - entry point
*Description : " I never thought that it would pay off"
*Return: always 0 (success)
*/
int main(void)
{
int n = 97;
while (n <= 122)
{
if (n == 101 || n == 113)
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
