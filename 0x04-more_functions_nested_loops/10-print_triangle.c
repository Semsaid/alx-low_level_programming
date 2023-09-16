#include "main.h"

/**
 * print_triangle - function that prints a triangle
 *@size: size of triangle
 * Return: void
 */

void print_triangle(int size)
{
int p, q, r;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (p = 1 ; p <= size ; p++)
{
for (r = size - p ; r >= 1 ; r--)
{
_putchar(' ');
}
for (q = 1 ; q <= p ; q++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
