#include <stdio.h>
/**
*main - Entry point
*Description:'print the alphabets in both upper and lowercase'
*Return: Always 0 (Success)
*/
int main(void)
{
	int dec = 97;
	int udec = 65;

	while (dec <= 122)
	{
		putchar(dec);
		dec++;
	}
	while (udec <= 90)
	{
		putchar(udec);
		udec++;
	}
	putchar('\n');
	return (0);
}
