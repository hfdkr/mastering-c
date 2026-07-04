#include <unistd.h>

/*
** Exercise 04: Practice (not official C00 exercise)
** Description:
**   This program prints the alphabet in reverse order
**   from 'z' to 'a' using a while loop and write().
**   It helps understand ASCII characters and loops in C.
*/

int main(void)
{
    char c = 'z';

    while (c >= 'a')
    {
        write(1, &c, 1);
        c--;
    }
    return 0;
}