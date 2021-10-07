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

void    *ft_memmove(void *dest, const void *src, size_t num)
{
    char *cdest;
    char *csrc;
    size_t a;
    
    cdest = (char *) dest;
    csrc = (char *) src;
    a = 0;

    if (dest == NULL && src == NULL)
        return dest;

    while (a != num)
    {
        cdest[a] = csrc[a];
        a++;
    }
    return dest;
}
