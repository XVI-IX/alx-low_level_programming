#include "main.h"
/**
 * *_strcpy - function to copy string from source to destination
 * Description: Copies string pointed to by src, including the
 * terminal null byte ('\0'), to the buffer pointed to by dest.
 *
 * @dest: destination pointer
 * @src: source pointer
 *
 * Return: the pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int l;

	for (l = 0; src[l] != '\0'; l++)
	{
		dest[l] = src[l];
	}
	dest[l] = '\0';

	return (dest);
}
