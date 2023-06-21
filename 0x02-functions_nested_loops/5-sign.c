#include "main.h"

/**
 * main - check the code.
 *Description: is a function  printSign - print + if n <0, zero if =0
 * - if <0
 *   @n: integer for function
 * Return: 1 if +, 0 if 0, -1 if -
 */
int printSign(int n)
{
	if (n > 0)
{
	_putchar(43);
	return (1);
}
else if (n == 0)
{
	_putchar(48);
	return (0);
}
else
{
	_putchar(45);
	return (-1);
}
}
