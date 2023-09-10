#include <stdio.h>

/**
 * main - main is the function of Numberz
 *
 * Return: always 0
 */

int main(void)
{
	int x;

	for (x = 0 ; x < 10 ; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
