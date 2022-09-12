#include <stdio.h>

/**
 * main - print alphapet 
 * Return: 0
 */

int main(void)
{
int count = 'a';
int Count = 'A';
while (count <='z' || count >='a')
{
putchar(count);
count += 1;
}
while (Count <='Z' || Count >='A')
{
putchar(Count);
Count += 1;
}
putchar('\n');
return (0);
}
