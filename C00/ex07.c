#include <unistd.h>

/*
** Exercise 07: practice
** Description:
**   This program prints digits from 0 to 9.
**   Each digit is printed twice consecutively.
**   It demonstrates loops, ASCII conversion, and write().
*/

int main(void)
{
    int i;
    char x;

    i = 0;
    while (i < 10)
    {
        x = i + '0';
        write(1, &x, 1);
        write(1, &x, 1);
        i++;
    }
    return 0;
}