#include "main.h"
/**
* _islower - check if char is lowercase
* @c: value to be checked if lower
*
* Description: Checks if character inputed is lowercase
*
* Return: 1 if true and 0 otherwise
*/
int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
