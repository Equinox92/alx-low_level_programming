#include "main.h"
/**
  *_puts - outputs a string to standard output
  *@str: string to output
  */
void _puts(void)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
