#include "main.h"

/**
 * _isdigit - function that checks for a digit (0 through 9)
 * @c: parameter for checking
 * Return: 1 if succesful 0 if fail
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
