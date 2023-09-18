#include "main.h"
:
/**
  *swap_int - swaps the value of 2 ints'
  *@a: int to swap
  *@b: int to swap
  */
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
