#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
    int i=0;
while(i<n && s1[i]==s2[i] && s1[i]!='\0' && s2[i]!='\0')
{
    i++;
}
    return s1[i]-s2[i];
}


