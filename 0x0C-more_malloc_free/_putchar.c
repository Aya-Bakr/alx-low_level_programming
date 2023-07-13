#include <unistd.h>

/**
 * main - write c to stdout
 * @c:char
 * Return: 1 when success
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
