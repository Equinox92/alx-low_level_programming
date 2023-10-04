#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *_strdup - duplicate to new memory location
  *@str: char
  *Return: 0
  */
char *_strdup(char *str)
{
	char *d;
	int v, a = 0;

	if (str == NULL)
		return (NULL);
	v = 0;
	while (str[v] != '\0')
		v++;

	d = malloc(sizeof(char) * (v = 1));

	if (d == NULL)
		return (NULL);

	for (a = 0; str[a]; a++)
		d[a] = str[a];

	return (d);
}
