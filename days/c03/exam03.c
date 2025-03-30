#include<unistd.h>


char	*ft_strncat(char *dest, char *src, int nb)
{
    int i=0;
    int x=0;

    while(dest[x]!='\0')
    {
        x++;
    }
    if(nb==0)
    {
        return dest;
    }

    while(i<nb && src[i]!='\0')
    {
        dest[x]=src[i];
        x++;
        i++;
    }
    dest[x]='\0';
    return dest;
}


