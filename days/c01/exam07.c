#include<unistd.h>


void	ft_rev_int_tab(int *tab, int size)
{
    int i=0;
    int j=size-1;
    int tmp;
    while(i<=size && size>=i)
    {
        tmp=tab[i];
        tab[i]=tab[size];
        tab[size]=tmp;

        i++;
        size--;
    }
}



