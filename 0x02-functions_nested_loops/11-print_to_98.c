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
	for(n; n <= 98; n++)
	{
		printf("%d, ", n);
	}
}
