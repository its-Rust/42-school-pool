#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_is_negetive(int n)
{
    if(n>0)
    {
        ft_putchar('P');
    }else{
        ft_putchar('N');
    }
}
