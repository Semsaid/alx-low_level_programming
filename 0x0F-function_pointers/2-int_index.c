#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of element in array
 * @cmp: pointer to the function of one of the three main
 * Return: void
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i;

if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
	return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
return (i);
}
return (-1);
}
