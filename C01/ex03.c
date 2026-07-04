#include <unistd.h>

/*
** Exercise: ex03
** Name: ft_swap
** Description:
**   This function swaps the values of two integers.
**   It uses a temporary variable to store one value
**   while exchanging the contents of the pointers.
*/

void ft_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}