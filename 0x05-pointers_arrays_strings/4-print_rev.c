#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: String to be printed in reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i = 0;

	for (; i != '\0'; i++)
		;

	for (; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
