/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_str.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:35:53 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/19 09:30:35 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//7L
// void	ft_putstr_fd(char *str, int fd)
// {
// 	if (!str)
// 		return ;
// 	while (*str)
// 	{
// 		ft_putchar_fd(*str, fd);
// 		str++;
// 	}
// }

// int	ft_putstr_int(char *str)
// {
// 	int	len_print;

// 	len_print = ft_strlen(str);
// 	ft_putstr_fd(str, 1);
// 	return (len_print);
// }

int	ft_putchar_int(int chr)
{
	return (write(1, &chr, 1));
}

int	ft_putstr_rtnlen(char *str, int len_print)
{
	// ssize_t	len_print;

	// len_print = 0;
	if (str == NULL)
		len_print += write(1, "(null)", 6);
	while (str != NULL && *str != '\0')
	{
		len_print += ft_putchar_int(*str);
		str += 1;
	}
	return (len_print);
}
		// len_print += 1;

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
