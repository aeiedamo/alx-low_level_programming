#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print the last digit of the number stored in variable n
 *
 * Description: program will assign a random number to the variable n each time
 * it is executed.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, n % 10);
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
	if (n % 10 == 0)
	{
		printf("and is 0\n");
	}
	if (n % 10 != 0 && n % 10 < 6)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
