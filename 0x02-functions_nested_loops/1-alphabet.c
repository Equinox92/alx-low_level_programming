#include "main.h"
/**
  *main - Entry point
  *Description: 'prints the alphabet in lowercase'
  *Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	int lc;
	for(lc = 97; lc <= 122; lc++)
	{
		_putchar(lc);
	}
	_putchar('\n');
}
