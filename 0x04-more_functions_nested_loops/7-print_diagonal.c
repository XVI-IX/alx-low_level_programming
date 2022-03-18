#include <stdio.h>
#include "main.h"
/**
 * print_diagonal - prints diagonal line in the terminal
 *
 * Return: ALways 0
 */
void print_diagonal(int n)
{
	int i = 0, j = 0;

	for (; i < n; i++)
	{
		for (; j <= i; j++)
		{
			if (j < i)
			{
				_putchar(" ");
			}
			else if (j == i)
			{
				_putchar("\\");
			}
		}
		j = 0;
		
		_putchar('\n');
	}
	_putchar('\n');
	return (0);
}
