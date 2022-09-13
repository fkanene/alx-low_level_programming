#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints _putchar, followed by a new line
 * Return: 0
 */

int main(void)
{
		char pch[] = "_putchar";
			int msg;

			for (msg = 0; msg <= 8; msg++)
			{
			putchar(pch[msg]);
			}
			putchar('\n');
			return (0);
}
