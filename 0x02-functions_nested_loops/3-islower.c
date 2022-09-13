#include "main.h"

/**
 * _islower - return 1 is lowercase
 * retrun 0 otherwise
 * @c: The input character to check
 * Return: int.
 */

int _islower(int c)
{
if (c <= 'z' && c >= 'a')
{
return (1);
}
else
{
return (0);
}
}
