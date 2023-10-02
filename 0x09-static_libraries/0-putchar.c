#include <unistd.h>
/**
*_putchar - c charaters to stan. out
*@c: char to output
*Return: 1 success. On error return -1,
*and errno set respectively
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
