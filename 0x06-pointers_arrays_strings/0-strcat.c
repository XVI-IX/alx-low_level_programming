#include "main.h"
/**
 * *_strcat - Function that concatenates two strings.
 *
 * Description: This function appends the src string to the dest string,
 * overwirting the terminating null byte at the end of dest, and then adds 
 * a terminating null byte.
 *
 * @*dest: pointer to destination string
 * @*src: pointer to source string
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int l = 0, j = 0;

	for (; dest[l] != '\0'; l++)
		;
	for (; src[j] != '\0'; j++)
	{
		dest[l] = src[j];
		
		l++;
	}
	dest[l + 1] = '\0';

	return (dest);
}
