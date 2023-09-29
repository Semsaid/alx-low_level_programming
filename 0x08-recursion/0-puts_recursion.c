#include "main.h"

/**
 * _puts_recursion - function that prints a string, followed by a new line
 * @s: string
 *
 * Return: on success 1.
 * On error, -1 is return, and error is not appropriately.
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
