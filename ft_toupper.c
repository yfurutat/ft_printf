/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 15:44:04 by yfurutat          #+#    #+#             */
/*   Updated: 2022/12/19 13:45:46 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

//1.
char	*ft_toupper_str(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c += ('A' - 'a');
	return (c);
}

// int	main(void)
// {
// 	printf("%c\n", ft_toupper('s'));
// 	return (0);
// }

//2
//static int	ft_islower(int c);

// int	ft_toupper(int i)
// {
// 	if (ft_islower(i))
// 		i += ('A' - 'a');
// 	return (i);
// }

//static int	ft_islower(int c)
// {
// 	return (c >= 'a' && c <= 'z');
// }

//3
// int	ft_toupper(int i)
// {
// 	if (i >= 'a' && i <= 'z')
// 		i -= ('a' - 'A');
// 	return (i);
// }

//4.
// int	ft_toupper(int i)
// {
// 	if (i >= 'a' && i <= 'z')
// 		i -= ' ';
// 	return (i);
// }

//5.
// int	ft_toupper(int i)
// {
// 	if (i >= 97 && i <= 122)
// 		i = i - 32;
// 	return (i);
// }

// //6.
// int	ft_toupper(int i)
// {
// 	if (i >= 97 && i <= 122)
// 		return (i - 32);
// 	return (i);
// }
