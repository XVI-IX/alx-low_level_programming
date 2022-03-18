#include <stdio.h>
#include "main.h"
/**
 * print_line - prints out a straight line
 *
 * Return: Always 0
 */
void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > i)
		{
			_putchar("_");
		}

		_putchar('\n');
	}
	return (0);
}
