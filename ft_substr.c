#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t a = 0;
    size_t b = 0;

    char *sub = (char *)malloc(len + 1 * sizeof(char));
	
	if(!sub || !s) 
        return NULL;
    if(start >= ft_strlen(s))
        return ft_strdup("");       
    while(s[a] != '\0')
    {
        if(a == start)
        {
            while(b != len)     
            {
                sub[b] = s[a];
                b++;
                a++;
            }
        sub[b] = '\0';
        return (sub);
        }
        a++;
    }
    return NULL;

}