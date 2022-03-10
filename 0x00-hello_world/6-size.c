#include <stdio.h>
/**
 * main - A function to print sizes of various C data types
 *
 * Return: prints out the sizes of data types
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %d byte\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (long)sizeof(i));
	printf("Size of a long int: %d byte(s)\n", (long long int)sizeof(i));
	printf("Size of a float: %d byte(s)\n", (sizeof(f));
}
