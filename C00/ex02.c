#include <unistd.h>

/*
** Exercise: ex02
** Name: ft_print_numbers
** Description:
**   Prints digits from 0 to 9 using a while loop.
**   Each integer is converted to its ASCII character
**   by adding '0'.
*/

int main(void)
{
    int i;
    char c;

    i = 0;
    while (i < 10)
    {
        c = i + '0';
        write(1, &c, 1);
        i++;
    }
    return 0;
}