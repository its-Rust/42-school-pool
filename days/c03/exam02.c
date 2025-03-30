#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
    int i=0;
    int o=0;

    while(dest[i]!='\0')
    {
        i++;
    }

    while(src[o]!='\0')
    {
        dest[i]=src[o];
        i++;
        o++;
    }
    dest[i]='\0';
    return dest;
}

int main()
{
    char dest[]="hello ";
    char src[]="world";
    printf("%s",ft_strcat(dest,src));

}