#include "main.h"
/**
 * puts_half - prints half of a string
 * Description: Function prints the second half of the string
 *
 * @str: string to be printed
 *
 * Return: void
 *
 */
void puts_half(char *str)
{
	int l, n;

	for (l = 0; str[l] != '\0'; l++)
		;

	if (l % 2 == 0)
	{
		n = l / 2;
	}
	else
	{
		n = (l + 1) / 2;
	}

	for (; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}
