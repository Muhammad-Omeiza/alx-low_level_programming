#include"main.h"

/**
* _islower - check if a character is lower case or not
*
* @c: the ASCII value of the character
*
* Return: 0 or 1
*/
int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
else
return (0);
}
