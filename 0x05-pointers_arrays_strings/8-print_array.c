#include "main.h"
/**
  *print_array - outputs n elements of an array separated by, (_)
  *integers must be displayed in respective order stored in array
  *@a: array
  *@n: number of elements of array to be output
  *Return: a & n 
  */
void print_array(int n, int *a)
{
	int b;

	for (b = 0; b < (n - 1); b++)
	{
		printf("%d, ", a[b]);
	}
	if (b ==(n - 1))
	{
		printf("%d", a[b - 1]);
	}
	printf("\n");
}
