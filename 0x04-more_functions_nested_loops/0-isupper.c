#include "main.h"
/**
 * _isupper - Checks if character inputted is uppercase
 *
 * Return: Returns 0
 */
int _isupper(int c)
{
	if (c > 64  && c < 92)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
