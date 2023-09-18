#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: parameter 1 array to be used
 * @n: parameter 2 number to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", a[x]);
		if (x < n - 1)
			printf("\n");
	}
	printf("\n");
}
