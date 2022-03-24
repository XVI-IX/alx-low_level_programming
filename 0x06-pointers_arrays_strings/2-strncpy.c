#include "main.h"
/**
 * *_strcpy - a function that copies a string
 * @dest: destination for string to be copied to
 * @src: source of string
 * @n: number bytes to be copied
 *
 * Return: Pointer to copied string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	while (l < n)
	{
		dest[l] = src[l];
		l++;
	}

	return (dest);
}
