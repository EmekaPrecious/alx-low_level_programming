#include <stdio.h>
#include <stdlib.h>

/**
* main - a progam that prints all possible combo of two numbers
* numbers must be seperated by ,, followed by a space.
* 01 and 10 are considered the same combination of 0 and 1.
* Return: Always 0
*/

int main(void)
{
int c;
int d = 0;

while (d < 10)
{
c = 0;
while (c < 10)
{
if (d != c && d < c)
{
putchar('0' + d);
putchar('0' + c);

if (c + d != 17)
{
putchar(',');
putchar(' ');
}
}
c++;
}
d++;
}
putchar('\n');

return (0);
}
