#include "main.h"
/**
 * print_numbers - prints out numbers 0 to 9
 *
 * Return: Always 0
 *
 */
void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		_putchar(i + '0');
	}

	_putchar('\n');
}
