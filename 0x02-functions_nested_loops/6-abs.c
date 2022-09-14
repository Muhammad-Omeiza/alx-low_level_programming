#include"main.h"

/**
* _abs - function to return the absolute value of a number (i.e the positive value of the number)
*
* @n: n of type int
*
* Return: the absolute value of n
*/
int _abs(int n)
{
if (n < 0)
n = -1 * n;
return (n);
}
