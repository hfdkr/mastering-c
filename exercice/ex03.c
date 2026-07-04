#include <unistd.h>

/*
** Exercise: ex03
** Name: ft_print_reverse_numbers
** Description:
**   This program prints the digits from 9 to 0
**   in reverse order using a while loop and write().
**   It uses ASCII conversion ('0') to print characters.
*/

int main (void)
{
    int i = 9;
    char a;

    while (i >= 0)
    {
        a = i + '0';
        write(1, &a, 1);
        i--;
    }
    return 0;
}