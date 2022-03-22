#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - groups numbers into fizz, buzz or fizzbuzz
 *
 * Return: Always 0
 */
void fizz_buzz(void)
{
	int i = 1, f = 100;

	for (; i < f + 1; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("FizzBuzz");

			while (n != 100)
			{
				printf(" ");
			}
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");

			while (n != 100)
			{
				printf(" ");
			}
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");

			while (n != 100)
			{
				printf(" ");
			}
		}
		else
		{
			printf("%d", i);

			while (n != 100)
			{
				printf(" ");
			}
		}
	}
}
