#include "main.h"
#include <string.h>

/**
 * infinite_add - function that adds two numbers.
 * @n1: parameter 1
 * @n2: parameter 2
 * @r: buffer for result storage
 * @size_r: buffer size
 * Return:result r stored is positive, failed is 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, digits, overflow;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + i) != '\0')
		i++;
	while (*(n2 + j) != '\0')
		j++;
	i--;
	j--;
	if (j >= size_r || i >= size_r)
		return (0);
	while (j >= 0 || i >= 0 || overflow == i)
	{
		if (i < 0)
			val1 = 0;
		else
			val1 = *(n1 + 1) - '0';
		if (j < 0)
			val2 = 0;
		else
			val2 = *(n2 + j) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - i))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		j--;
		i--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (0);
}
