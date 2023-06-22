#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Describtion: prints putchar using _putchar prototype
 *
 * Return: always 0 (success)
 *
*/

int main(void)
{
        char str[] = "_putchar";
        int ch;

        for (ch = 0; ch < 8; ch++)
                _putchar(str[ch]);
        _putchar('\n');

        return (0);
}
