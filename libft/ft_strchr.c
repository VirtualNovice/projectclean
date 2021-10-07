/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 23:25:22 by oumali            #+#    #+#             */
/*   Updated: 2021/10/08 02:30:30 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    int a,b;
    char *str2;
    int size = ft_strlen(s);
    
    str2 = (char*)malloc(size + 1 * sizeof(char));

    a = 0;
    b = 0;
    while(s[a] != '\0')
    {
        if(s[a] == (unsigned char) c)
        {   
            while(s[a] != '\0')
            {
                str2[b] = s[a];
                a++;
                b++;
            }
            str2[b] = '\0';
            return str2;
        }
        a++;
    }
    str2[b] = '\0';
    return str2;
}
