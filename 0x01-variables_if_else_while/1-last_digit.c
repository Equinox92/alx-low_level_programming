#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Description: 'Print the last digit'
 * Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int lstdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lstdgt = n % 10;
	if (lstdgt > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lstdgt);
	}
	else if (lstdgt == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lstdgt);
	}
	else
	{

		printf("Last digit of %d is %d and less than 6 and not 0\n", n, lstdgt);
	}
	return (0);
}
