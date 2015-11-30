/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 17:04:17 by tvasseur          #+#    #+#             */
/*   Updated: 2015/11/27 10:12:07 by tvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*a;
	const char	*b;

	a = dst;
	b = src;
	if (a <= b || b >= (a + len))
	{
		while (len--)
			*a++ = *b++;
	}
	else
	{
		a = a + len - 1;
		b = b + len - 1;
		while (len--)
			*a-- = *b--;
	}
	return (dst);
}
