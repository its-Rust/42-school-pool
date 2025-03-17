#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_print_alphabet(void)
{
    for(int i=97;i<=122;i++)
    {
        ft_putchar(i);
    }
}

int main(){
    ft_print_alphabet();
}