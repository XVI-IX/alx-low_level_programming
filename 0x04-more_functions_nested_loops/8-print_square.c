#include "main.h"
/**
 * print_square - prints a square
 * @size: size of the square
 *
 * Return: Always 0
 *
 */
void print_square(int size)
{
	int i = 0, j = 0;

	for (; i < size; i++)
	{
		for (; j < size; j++)
		{
			_putchar("#");
		}

		_putchar('\n');
	}
}
