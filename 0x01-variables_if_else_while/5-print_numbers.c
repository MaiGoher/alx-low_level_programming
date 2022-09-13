#include <stdio.h>

/**
 * main - print numbers of base 10
 * Return: 0
 */

int main(void)
{
int count = 0;
while (count <= 0 && count >= 9)
{
putchar(count);
count += 1;
}
putchar('\n');
return (0);
}
