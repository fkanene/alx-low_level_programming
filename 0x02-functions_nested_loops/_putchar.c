#include <unistd.h>

/**
 * _putchr -writes the charcter c to stdout
 * @c: the chracter to print
 *
 * return: on success 1.
 * on error, -1 is returned, errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
