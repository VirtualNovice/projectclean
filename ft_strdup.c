#include "libft.h"

char *ft_strdup(const char *s1)
{
	int slen = ft_strlen(s1);
	char *str = (char *)ft_calloc(slen + 1,sizeof(char));
	if (!str)
		return (NULL);
	ft_memcpy(str,s1,slen);
	return str;
}
