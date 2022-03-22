#include "main.h"
/**
 * _puts - prints a string to stdout
 * @str: String to be printed to stdout
 *
 * Return: Void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\0');
	_putchar('\n');
}
