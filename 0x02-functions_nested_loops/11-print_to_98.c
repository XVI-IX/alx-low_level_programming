#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from specified number to 98
 * @n: number specifying the start of the range
 *
 * Return: always returns void
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n <= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	if (n < 98)
	{
		while (n >= 98)
		{
			printf("%d", n);

			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
}
