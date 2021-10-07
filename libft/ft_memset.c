/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 09:41:35 by oumali            #+#    #+#             */
/*   Updated: 2021/10/08 03:24:39 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    unsigned char *ptr;
    size_t  a;

    a   = 0;
    ptr = b;

    while(a < len)
    {
        ptr[a] = (unsigned char) c;
        a++;
    }
    return (b);
}
