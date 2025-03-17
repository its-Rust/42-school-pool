#include<unistd.h>

void ft_putchar(char c)
{
    write(1,&c,1);
}

void ft_print_comb(void)
{
    char num0;
    char num1;
    char num2;
    while (num0 <=7)
    {
        num0=0;
        while(num0<=7)
        {
            num1=num0+1;
            while (num1<=8)
            {
                num2=num1+1;
                while(num2<=9)
                {
                    ft_putchar(num0+'0');
                    ft_putchar(num1+'0');
                    ft_putchar(num2+'0');

                    if(num0==7 && num1==8 && num2==9)
                    {
                        break;
                    }
                    else
                    {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                num2++;}
            num1++;}
            
        num0++;}
    }
    
}

int main()
{
    ft_print_comb();
}