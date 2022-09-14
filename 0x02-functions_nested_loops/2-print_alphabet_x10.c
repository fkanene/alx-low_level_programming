#include "main.h"
/**
* print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
* Return: 0
*/

void print_alphabet_x10(void)
{
	int b;
	int c;

for (b = 1; b <= 10; b++)
{
	for (c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
}
