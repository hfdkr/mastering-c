#include <unistd.h>

/*
** Exercise: practice
** Description:
**   This program prints digits from 0 to 9,
**   each number followed by a newline.
**   It demonstrates loops, ASCII conversion, and write().
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
        write(1, "\n", 1);
        i++;
    }
    return 0;
}