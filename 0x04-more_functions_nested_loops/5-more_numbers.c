#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int i = 0, j = 0;
	
	while (i < 10)
	{
		for (; j < 14; j++)
		{
			_putchar(i);
		}
		
		_putchar('\n');
	}

	_putchar('\n');
	return (0);
}
