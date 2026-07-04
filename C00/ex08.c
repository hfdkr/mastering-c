#include <unistd.h>

/*
** Exercise 08: practice
** Description:
**   This program prints digits from 0 to 9.
**   Each digit is printed (digit + 1) times.
**   It demonstrates nested loops and ASCII conversion.
*/

int main(void)
{
    int i;
    int j;
    char a;

    i = 0;
    while (i < 10)
    {
        a = i + '0';
        j = 0;
        while (j <= i)
        {
            write(1, &a, 1);
            j++;
        }
        i++;
    }
    return 0;
}