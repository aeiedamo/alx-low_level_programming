#include "main.h"
/**
 * print_triangle - printer function
 * @size: size of triangle's base
 *
 * Description: a function that prints
 * a triangle
 *
 * Return: None.
 */
void print_triangle(int size)
{
	int counter1, counter2;

	for (counter1 = 0; counter1 < size; ++counter1)
	{
		for (counter2 = 0; counter2 < counter1; ++counter2)
			_putchar(' ');
		putchar('#');
		putchar('\n');
	}
}