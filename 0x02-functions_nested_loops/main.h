#include <stdio.h>
void print_alphabet(void)
{
int count = 'a';
while (count <= 'z' && count >= 'a')
{
putchar(count);
count += 1;
}
putchar('\n');
return (0);
}
