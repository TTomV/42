/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:16:26 by tvasseur          #+#    #+#             */
/*   Updated: 2015/11/27 13:16:26 by tvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int i;
	char *frsh;

	i = 0;
	if ((frsh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)) == 0)
		return (NULL);
	while (s[i])
	{
		frsh[i] = f(s[i]);
		i++;
	}
	frsh[i] = '\0';
	return (frsh);
}
