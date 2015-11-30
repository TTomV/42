/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 15:38:50 by tvasseur          #+#    #+#             */
/*   Updated: 2015/11/27 10:05:17 by tvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char		*dst_cpy;
	const char	*src_cpy;

	dst_cpy = dst;
	src_cpy = src;
	while (n-- > 0 && *src_cpy != c)
		*dst_cpy++ = *src_cpy++;
	if (*src_cpy != c)
		return (0);
	*dst_cpy++ = c;
	return (dst_cpy++);
}
