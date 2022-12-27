#include <stdio.h>

/**
* main - prime factors of 612852475143
* print the largest prime factor and a new line
* Return: Always 0
*/

int main(void)
{
long n, i;

n = 612852475143;
for (i = 2; i < n; i++)
{
while (n % i == 0)
n = n / i;
}
printf("%lu\n", n);

return (0);
}
