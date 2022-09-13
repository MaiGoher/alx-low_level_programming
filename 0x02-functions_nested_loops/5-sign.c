#include "main.h"

/**
 * print_sign - Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 * @n: The input character to check
 * Return: int.
 */

int print_sign(int n)
{
if (n > 0)
{
return (1);
_putchar(43);
}
else if (n < 0)
{
return (-1);
_putchar(45);
}
else
{
return (0);
_putchar(48);
}
}
