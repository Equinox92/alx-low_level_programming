#include "main.h"
/**
  *_puts - outputs a string to standard output
  *@str: string to output
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
