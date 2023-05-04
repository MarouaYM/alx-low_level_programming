#include "main.h"

/**
* _strcat - Concatenate two strings
* @dest: string 1
* @src: string 2
* @n : number of bytes
* Return: Pointer
*/

char *_strcat(char *dest, char *src)
{
	int i, dest_len = 0;

	while (dest[dest_len])
	{
		dest_len++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[dest_len] = src[i];
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
