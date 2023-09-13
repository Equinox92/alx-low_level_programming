#include "main.h"
/**
  * _isalpha - Returns value (1) if letter else (0)
  * @c: Character in ASCII
  * Return: 1 for letters, else 0
  */
int _isalpha(int c)
{
	if ((c>= 97 && c <=122)||(c >= 65 && c<= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
		
}
