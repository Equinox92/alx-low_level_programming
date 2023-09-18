#include "main.h"
#include <stdio.h>
/**
  *print_array - outputs n elements of an array separated by, (_)
  *integers must be displayed in respective order stored in array
  *@a: array
  *@n: number of elements of array to be output
  *Return: a & n
  */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
