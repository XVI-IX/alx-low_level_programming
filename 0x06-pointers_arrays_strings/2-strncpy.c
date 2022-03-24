#include "main.h"
/**
 * *_strncpy - a function that copies a string
 * @dest: destination for string to be copied to
 * @src: source of string
 * @n: number bytes to be copied
 *
 * Return: Pointer to copied string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int l = 0;

	for (; l < n && src[l] != '\0'; l++)
		dest[l] = src[l];
	for (; l < n; l++)
		dest[l] = '\0';

	return (dest);
}
