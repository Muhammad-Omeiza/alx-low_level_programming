#include"main.h"
/**
* main: Entry point of the program
*
* Description: Simple program to print _putchar
*
* Return: Always 0
*/
int main (void)
{
char arr[] = "_putchar";
int index;
for (index = 0; index < 8; index++)
{
_putchar(arr[index]);
}
_putchar('\n');
return (0);
