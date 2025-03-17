#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
    if (b != 0 && *b != 0) 
    {
        int sa = *a;

        *a = sa / *b;
        *b = sa % *b;
    }
}