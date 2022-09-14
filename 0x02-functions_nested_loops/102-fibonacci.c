#include "main.h"

/**
* main - prints the 50 first fibonnacci numbers
*
* Return: 0
*/

int main(void)
{
	int i;
	long int j;
	long int k;
	long int f;

	j = 1;
	k = 2;
	_putchar("%ld, %ld, ", j, k);
	for (i = 3; i <= 50; i++)
	{
	f = j + k;
	_putchar("%ld", f);
	if (i != 50)
	{
		_putchar(", ");
}
	j = k;
	k = f;
	}
	_putchar("\n");
	return (0);
}
