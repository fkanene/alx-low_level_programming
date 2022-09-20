#include "main.h"
/**
*_strlen - Entry point
*@s: give me the word
*Return: gave large
*/
int _strlen(char *str)
{
	_strlen length = 0;

	while (*str++)
	length++;
	return (length);
}
