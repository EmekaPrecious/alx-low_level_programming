#include <stdio.h>

/**
* main - print all combo of single numbers
* Return: Always 0
*/

int main(void)
{
int n = 0;

while (n < 10)
{
putchar(48 + n);
if (n != 9)
{
putchar(',');
putchar(' ');
}
n++;
}

putchar('\n');
return (0);
}
