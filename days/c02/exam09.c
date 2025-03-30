#include<unistd.h>

char	*ft_strlowcase(char *str)
{
    int i=0;
    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
        {
            str[i]+=32;
        }
    i++;}
}

char	*ft_strcapitalize(char *str)
{
    int i=0;
    int x=0;
    ft_strlowcase(str);
    while(str[i]!='\0')
    {
        if(str[i]>=97 && str[i]<=122)
        {
            if(x==0)
            {
                str[i]-=32;
                x=1;
            }
        }
        else if(str[i]>=48 && str[i]<=57)
        {
            x=1;
        }
        else{x=0;}
        
    i++;}
    return str;
}

