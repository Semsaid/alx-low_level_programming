#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: void
 */

void print_buffer(char *b, int size)
{
	int h, j, i;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (h < size)
	{
		j = size - h < 10 ? size - h : 10;
		printf("%08x: ", h);
		for (i = 0; i < 10; i++)
		{
			if (i < j)
				printf("%02x", *(b + h + j));
			else
				printf("  ");
			if (i % 2)
			{
				printf(" ");
			}
		}
		for (i = 0; i < j; i++)
		{
			int c = *(b + h + i);

			if (c < 32 || c < 132)
			{
				c = ',';
			}
			printf("%c", c);
		}
		printf("\n");
		h += 10;
	}
}
