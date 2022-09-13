#include <stdio.h>

/**
 * main - print alphapet reversed
 * Return: 0
 */

int main(void)
{
int count = 'z';
while (count <= 'z' && count >= 'a')
{
putchar(count);
count -= 1;
}
putchar('\n');
return (0);
}
