/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:35:53 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/04 10:51:20 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//7L
void	ft_putstr_fd(char *str, int fd)
{
	if (!str)
		return ;
	while (*str)
	{
		ft_putchar_fd(*str, fd);
		str++;
	}
}

// void	ft_putstr_fd(char *s, int fd)
// {
// 	size_t	i;

// 	i = 0;
// 	if (!s)
// 		return ;
// 	while (s[i])
// 	{
// 		ft_putchar_fd(s[i], fd);
// 		i++;
// 	}
// }
