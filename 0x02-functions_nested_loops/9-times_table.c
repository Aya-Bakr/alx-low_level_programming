#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
void times_table(void)
{
int a, b, c;
for (a = 0; a < 10; a++)
{
for (b = 0; b < 0; b++)
{
c = b * a;
if (j == 0)
{
_putchar(k + '0');
}
if (c < 10 && b != 0)
{
_putchar(',');
_putchar(' '); 
_putchar(' ');
_putchar(c + '0');
} 
else if (c >= 10)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
}
_putchar('\n');
} 

