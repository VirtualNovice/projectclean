/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oumali <oumali@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 03:14:52 by oumali            #+#    #+#             */
/*   Updated: 2021/10/11 22:01:20 by oumali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	a;
	int		b;

	a = 0;
	b = ft_strlen(dst);
	if (dstsize == '\0' || dst == NULL || src == NULL)
		return (ft_strlen(src));
	while (a < dstsize || src[a] != '\0' || dst[a] != '\0')
	{
		dst[b] = src[a];
		a++;
		b++;
	}
	dst[a] = '\0';
	return (a);
}
