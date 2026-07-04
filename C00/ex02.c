#include <unistd.h>

/*
** Exercise: ex02
** Name: ft_print_numbers
** Description:
**   This program prints the digits from 0 to 9
**   using a while loop and the write system call.
**   It converts integers to characters using ASCII ('0').
*/

int main(void)
{
    int i = 0;
    char c;

    while (i < 10)
    {
        c = i + '0';
        write(1, &c, 1);
        i++;
    }
    return 0;
}