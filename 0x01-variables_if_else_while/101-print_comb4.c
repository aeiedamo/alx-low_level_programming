#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Write a program that prints all possible
 * different combinations of three digits.
 *
 * Description: Write a program that prints all
 * possible different combinations of three digits.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 9; ++num1)
	{
	for (num2 = 0; num2 <= 9; ++num2)
	{
	for (num3 = 0; num3 <= 9; ++num3)
	{
	if (num1 < num2 && num2 < num3)
	{
	putchar(num1 + '0');
	putchar(num2 + '0');
	putchar(num3 + '0');
	if (!(num1 == 7 && num2 == 8 && num3 == 9))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	}
	putchar(10);
	return (0);
}
