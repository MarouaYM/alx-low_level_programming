#include "main.h"

/**
* _strncpy - *Concatenate two strings
* @dest: string 1
* @src: string 2
* @n : number of bytes
* Return: Pointer
*/

char *_strncpy(char *dest, char * src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0; src[index] && index < n; index++)
	{
		dest[index] = src[index];
	}
	for (index = src_len; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}

