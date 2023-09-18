#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: length of the string
 * Return: length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
