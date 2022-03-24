#include "main.h"
/**
 * reverse_array - A function that reverses the content of an
 * array of integers.
 * @a: Array of integers
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int l, h, m = n;

	for (m--, l = 0; l < n /2; l++, m--)
	{
		h = a[l];
		a[l] = a[m];
		a[m] = h;
	}
}
