#include"main.h"

/**
* main - Entry point
*
* Description: A C program to print _putchar
*
* Return: 0
*/

int main(void)
{
char str[] = "_putchar";
int idx;

for (idx = 0; idx < 8; idx++)

{
_putchar(str[idx]);
}
return (0);
}
