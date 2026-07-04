#include <unistd.h>

/*
** Exercise: practice (ex09)
** Description:
**   This program prints numbers from 0 to 9.
**   Each number is followed by ", " except the last one.
**   It demonstrates loops and conditional output formatting.
*/

int main(void)
{
    int i;
    char c;

    i = 0;
    while (i < 10)
    {
        c = i + '0';

        if (i < 9)
        {
            write(1, &c, 1);
            write(1, ", ", 2);
        }
        else
        {
            write(1, &c, 1);
        }
        i++;
    }
    return 0;
}