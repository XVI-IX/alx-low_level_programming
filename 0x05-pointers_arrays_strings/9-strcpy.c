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
	int l, d = 0;

	for (l = 1; src[l] != '\0'; l++)
		;

	while (d <= l)
	{
		dest[d] = src[d];

		d++;
	}

	return (*dest);
}
