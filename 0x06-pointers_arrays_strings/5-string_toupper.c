#include "main.h"
/**
 * *string_toupper - Function that changes all lowercase letters of a string
 * to uppercase.
 *
 * @n: string to be checked
 *
 * Return: transformed string
 *
 */
char *string_toupper(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; i++)
	{
		if (n[i] > 96 && n[i] < 123)
		{
			n[i] = n[i] - 32;
		}
	}

	return (n);
}
