#include "main.h"
/**
 *I play what I call the alphabet game
 *prototype: void print_alphabet(void);
 */

void print_alphabet(void)
{	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	putchar(ch);
	print_alphabet();
	return (0);
}
