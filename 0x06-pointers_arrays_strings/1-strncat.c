#include "main.h"
/**
 * *_strncat - A function that concatenates two strings.
 *
 * Description: Similar to the _strcat function, except that
 * it will use at most n bytes from src and src does not nedd to be
 * null terminated if it contains n or more bytes
 *
 * @dest: pointer to destination string
 * @src: pointer to source string
 * @n: amount to bytes to be checked in src
 *
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0, j = 0;

	while (dest[l] != '\0')
	{
		l++;
	}

	for (; j < n && src[j] != '\0'; j++)
	{
		dest[l] = src[j];
		l++;
	}
	dest[l] = '\0';

	return (dest);

}
