#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number
 * @i: parameter function
 * Return: y
 */

int print_last_digit(int i)
{
	int y;

	y = i % 10;
	if (i < 0)
		y = -y;
	_putchar(y + '0');
	return (y);
}
