#include<main.h>

/* Function prototype for custom _putchar */
int _putchar(char c);
/**
* main-print _putchar
*
* main - Entry point
*
* it is written by mbah
*
* Return: Always 0 (Success)
*/

int main(void)
{
_putchar ('_');
_putchar ('p');
_putchar ('u');
_putchar ('t');
_putchar ('c');
_putchar ('h');
_putchar ('a');
_putchar ('r');
_putchar ('\n');	
return (0);
}

/* Definition of the custom _putchar function */
int _putchar(char c)
{
return write(1, &c, 1);
}
