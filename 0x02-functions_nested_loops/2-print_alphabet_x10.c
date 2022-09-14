#include "main.h"
/**
 * prints the alphabet 10 times
 * returns : 0
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
