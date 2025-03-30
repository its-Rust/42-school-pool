#include<unistd.h>

unsigned ft_strlcpy	(char *dest, char *src, unsigned int size)
{
    int len=0;
    int i=0;
    while(src[len]!='\0')
    {
        len++;
    }

    if(size==0)
    {
        return len;
    }

    while(src[i]!='\0' && i<size-1)
    {
        dest[i]=src[i];
        i++;
    }
    dest[i]='\0';
    return len;



}

