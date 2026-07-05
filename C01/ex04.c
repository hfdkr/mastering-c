/*
** Exercise: ex04
** Name: ft_div_mod
** Description:
**   This function calculates the division and the remainder
**   of two integers. The quotient is stored in *div, and the
**   remainder is stored in *mod using pointers.
*/

void ft_div_mod(int a, int b, int *div, int *mod)
{
    *div = a / b;
    *mod = a % b;
}