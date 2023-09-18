#include "main.h"
/**
  *puts_half - outputs half a string if chars odd,
  *output n
  *@str: input
  *Return: half n
  */
void puts_half(char *str)
{
	int n, h, ls;

	ls = 0;

	for (h = 0; str[h] != '\0'; h++)
		ls++;
	n = (ls / 2);

	if ((ls % 2) == 1)
		n = ((ls + 1) / 2);
	for (h = n; str[h] != '\0'; h++)
		_putchar(str[h]);
	_putchar('\n');
}
