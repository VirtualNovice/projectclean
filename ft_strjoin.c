#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	size_t a = 0;
	size_t b = ft_strlen(s1);

	if (s1 == NULL)
		return NULL;
	
	char *str = (char *)malloc(((ft_strlen(s1) + ft_strlen(s2)) + 1)* sizeof(char));
	
	ft_memcpy(str,s1,b);
	if(str == NULL)
		return NULL;
	while(s2[a] != '\0')
	{
		str[b + a] = s2[a];
		a++;
	}
	str[b + a] = '\0';
	return (str);	
}
