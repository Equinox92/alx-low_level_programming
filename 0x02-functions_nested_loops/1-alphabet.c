#include "main.h"
/**
  *print_alphabet - Entry point
  *Description: 'Prints alphabet in lowercase'
  *Return: Always 0 (Success)
  */
void print_alphabet(void)
{
	int lc;

	for (lc = 97; lc <= 122; lc++)
{
	_putchar(lc);
}
_putchar('\n');
}
