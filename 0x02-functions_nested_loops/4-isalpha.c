#include "main.h"

/**
 * _isalpha- return 1 is alphabetic
 * retrun 0 otherwise
 * @c: The input character to check
 * Return: int.
 */

int _isalpha(int c)
{
if ((c <= 'z' && c >= 'a') || (c <= 'Z' && c >= 'A'))
{
return (1);
}
else
{
return (0);
}
}
