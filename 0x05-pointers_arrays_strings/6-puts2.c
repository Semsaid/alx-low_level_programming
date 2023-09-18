#include "main.h"

/**
 * puts2 - prints every other character
 * @str: string to be printed
 * Return: void
 */

void puts2(char *str)
{
	int x;

	for (x = 0 ; str[x] != '\0' ; x++)
	{
		if (x % 2 == 0)
			_putchar(str[x]);
	}
	_putchar('\n');
}
