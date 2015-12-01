/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 13:16:34 by tvasseur          #+#    #+#             */
/*   Updated: 2015/12/01 10:55:39 by tvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*frsh;
	int		i;
	int		size_s1;

	i = 0;
	size_s1 = ft_strlen(s1);
	if ((frsh = malloc(sizeof(char) * (size_s1 + ft_strlen(s2) + 1))) == 0)
		return (NULL);
	while (*s1)
		frsh[i++] = *s1++;
	while (*s2)
		frsh[i++] = *s2++;
	frsh[i] = '\0';
	return (frsh);
}
