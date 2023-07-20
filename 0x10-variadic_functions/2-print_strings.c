#include "variadic_functions.h"

/**
 * print_numbers - to print the numbers seperatly
 * @separator: string
 * @n: number of the args
 * @...: the rest of integers
 * Return: void
*/
void print_string(const char *separator, const unsigned int n, ...);
{
int i = n;
char *str;
va_list ap;

if (!n)
{
printf("\n");
return;
}
va_start(ap, n);
while (i--)
printf("%s%s", (str = va_arg(ap, char *)) ? str : "(nil)",
i ? (separator ? separator : "") : "\n");
va_end(ap);
}
