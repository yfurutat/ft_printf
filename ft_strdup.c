/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:57:13 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/02 07:02:14 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//15L
char	*ft_strdup(const char *str)
{
	char	*dup;
	size_t	end;
	size_t	i;

	end = ft_strlen(str);
	dup = ft_calloc(end + 1, sizeof(char));
	if (!dup)
		return (NULL);
	i = 0;
	while (i < end)
	{
		dup[i] = str[i];
		i += 1;
	}
	return (dup);
}
