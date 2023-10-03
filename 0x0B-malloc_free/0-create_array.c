#include "main.h"
#include <stdlib.h>
/**
  *create_array - create an array of x size and assign c
  *@c: val. to assign
  *@size: array size
  *Description: create sized array and assign val. to c
  *Return: point to array. else NULL
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	a = malloc(sizeof(char) * size);
	if (size == 0 || a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}
