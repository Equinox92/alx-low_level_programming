#include "main.h"
/**
  *print_rev - print in reverse
  *@s: string to output
  *Return: Always 0 (success)
  */
void print_rev(char *s)
{
	int ls = 0;
	int a;

	while (*s != '\0')
	{
		ls++;
		s++;
	}
	s--;
	for (a = ls; a > 0; a--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
