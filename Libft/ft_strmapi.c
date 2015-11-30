/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvasseur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 12:35:25 by tvasseur          #+#    #+#             */
/*   Updated: 2015/11/27 13:15:37 by tvasseur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int i;
	char *frsh;

	i = 0;
	if ((frsh = (char *)malloc(sizeof(char) * ft_strlen(s) + 1)) == 0)
		return (NULL);
	while (s[i])
	{
		frsh[i] = f(i ,s[i]);
		i++;
	}
	frsh[i] = '\0';
	return (frsh);
}
