#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
    int i=0;
    int j=0;
    int x=i+1;
    int tmp;
    while (j<size)
    {
        while(tab[i]!='\0')
        {
            if(tab[i]>tab[x])
            {
                tmp=tab[i];
                tab[i]=tab[x];
                tab[x]=tmp;
            }
            i++;
        }
    j++;
    i=0;}
    
}


int main()
{
    int tab[]={3,5,7,8,3};
    ft_sort_int_tab(tab,5);
    printf("%d",tab[4]);
}