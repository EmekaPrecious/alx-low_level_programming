#include "main.h"

/**
* more_numbers - print numbers 0 - 14
* Return; 0
*/

void more_numbers(void)
{
int num, i;

for (num = 1; num <= 10; num++)
{
for (i = 0; i <= 14; i++)
if (i >= 10)
_putchar('1');
 _putchar(i % 10 + '0');
}
_putchar('\n');
}
