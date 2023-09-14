#include "main.h"
/**
 * print_numbers - printer function
 *
 * Description: a function that prints
 * the numbers, from 0 to 9.
 *
 * Return: None.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; ++i)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
