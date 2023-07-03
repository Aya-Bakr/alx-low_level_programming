#include "main.h"

/**
 * *_memset - filling the memory with constatnt bytes
 * @s: is a pointer
 * @b: is a constant
 * @n: the max byte
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0, n > 0, x++, n--)
	{
		s[x] = b;
	}

	return (s);
}
