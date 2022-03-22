#include "main.h"
/**
 * _strlen - computes the length of a string
 * @s: String to be checked for length
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);

	return (i);
}
