#include <stdio.h>
/**
 * main - A function to print sizes of various C data types
 *
 * Return: prints out the sizes of data types
 */
int main(void)
{
	printf("Size of a char: %d byte\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
}
