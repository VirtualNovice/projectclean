/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 10:40:56 by oumali            #+#    #+#             */
/*   Updated: 2021/10/07 22:54:18 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t num)
{
    char *cdest = (char *) dest;
    char *csrc = (char *) src;
    size_t a;

    a = 0;

    if (dest == NULL && src == NULL)
        return dest;

    while (a < num)
    {
        cdest[a] = csrc[a];
        a++;
    }
    return dest;
}
