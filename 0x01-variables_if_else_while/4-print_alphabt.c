#include <stdio.h>

/**
 * main - print alphapet
 * Return: 0
 */

int main(void)
{
int count = 'a';
while (count <= 'z' &&  count >= 'a' && count != 'q' && count != 'e')
{
putchar(count);
count += 1;
}
putchar('\n');
return (0);
}
