/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@42ABUDHABI.AE>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 03:15:27 by oumali            #+#    #+#             */
/*   Updated: 2021/10/08 03:15:31 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void  *ft_memchr(const void *s, int c, size_t n)
{
    size_t a;
    char *str;

    str = (char *)s;
    a = 0;
    while(a < n)
    {
        if(str[a] == c)
            return (str + a);
        a++;
    }
return (0);
}