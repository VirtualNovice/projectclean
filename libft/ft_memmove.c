/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:42:59 by oumali            #+#    #+#             */
/*   Updated: 2021/10/07 23:22:30 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *csrc = (char *)src;
    char *cdest = (char *)dest;
    int a;
    size_t b;

    b = cdest - csrc;
    if(cdest > csrc && b < n)
    {
        a = n - 1;
        while (a >= 0)
        {
            cdest[a] = csrc[a];
            a--;
        }
        return dest;
    }
    ft_memcpy(dest,src,n);
    return dest;
}