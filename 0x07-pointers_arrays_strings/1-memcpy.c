#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination for storage
 * @src: source of copies
 * @n: number of bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
