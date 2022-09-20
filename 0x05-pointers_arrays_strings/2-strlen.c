#include "mainn.h"
/**
*_strlen - Entry point
*@s: give me the word
*Return: gave large
*/
int _strlen(char *s)
{
	int big = 0;

	while (*(s + big) != '\0')
	{
	big++;
	}
	return (big);
}
