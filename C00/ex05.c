#include <unistd.h>

/*
** Exercise: ex05 (practice)
** Name: skip_alphabet
** Description:
**   This program prints uppercase letters from 'A' to 'Z'
**   but skips one letter each time (A, C, E, ...).
**   It helps practice loops and ASCII manipulation.
*/

int main(void)
{
    char c = 'A';

    while (c <= 'Z')
    {
        write(1, &c, 1);
        c += 2;
    }
    return 0;
}