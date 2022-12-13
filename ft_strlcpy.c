/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 03:12:02 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/03 22:58:37 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//14L
size_t	ft_strlcpy(char *dst, const char *src, size_t l_cpy)
{
	size_t	i;
	size_t	l_src;

	i = 0;
	l_src = ft_strlen(src);
	if (l_cpy == 0)
		return (l_src);
	while (src[i] && i < l_cpy - 1)
	{
		dst[i] = src[i];
		i += 1;
	}
	dst[i] = '\0';
	return (l_src);
}
