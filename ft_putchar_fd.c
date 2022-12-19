/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 07:35:53 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/15 07:41:19 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

// void	ft_putchar_fd(char ch, int fd)
// {
// 	write(fd, &ch, 1);
// }

// int	ft_putchar_int(int c)
// {
// 	ft_putchar_fd((char)c, 1);
// 	return (1);
// }

int	ft_putchar_int(int chr)
{
	return (write(1, &chr, 1));
}

// int	main(void)
// {
// 	printf("\n%d\n", ft_putchar_int('~'));
// 	return (0);
// }
