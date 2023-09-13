#include "main.h"
/**
  * print_sign - prints the sign of a number (<=> 0)
  * @n: Check integer
  * Return: 1 greater than 0, 0 if integer is 0 and -1 if integer is less than zero
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
	_putchar('\n');
}
