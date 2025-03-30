#include<unistd.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    int dest_len;
    int src_len;

    dest_len=0;
    src_len=0;
    while(dest[dest_len]!='\0')
    {
        dest_len++;
    }

    while (src[src_len]!='\0')
    {
        src_len++;
    }
    if(size <= dest_len)
    {
        return size + src_len; 
    }
    int i=dest_len;
    int j=0;

    while(i<size-1 && src[j]!='\0')
    {
        dest[i]=src[j];
        i++;
        j++;
    }
    dest[i]='\0';
    return dest_len + src_len;
}



