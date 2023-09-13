#include "main.h"
/**
  *print_alphabet_x10 - Print the alphabet lowercase 10 times
  *Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	char xtimes, lc;

	for (xtimes = 0; xtimes <= 9; xtimes++)
	{
		for (lc = 97; lc <= 122; lc++)
		{
			_putchar(lc);
		}
		_putchar('\n');
	}
}
