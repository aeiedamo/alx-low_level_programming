#include "main.h"

/**
 * swap_int - updater function
 * @a: pointer.
 * @b: pointer.
 *
 * Description: a function that
 * swaps the values of two integers.
 *
 * Return: None.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
