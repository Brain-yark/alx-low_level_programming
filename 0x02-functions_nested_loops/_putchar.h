#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char c = 'c';

    /* Use the `write` function to print a single character */
    write(1, &c, 1);

    return (0);
}

