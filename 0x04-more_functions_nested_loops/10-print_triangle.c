#include "holberton.h"

/**                                                            
 * print_square - Prints a # of size '@size' if n > 0.         
 * @size: Integer                                              
 * Return: void.                                               
 */

void print_square(int size)
{
        int a;

        if (size <= 0)
                _putchar ('\n');

        else
        {
                while (size > 0)
                {
                        a = size;
                        while (a > 0)
                        {
                                _putchar (35);
                                a--;
                        }
                        _putchar ('\n');
                        size--;
                }
                _putchar('\n');
        }
}
