/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_rtnlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:37:07 by yuske             #+#    #+#             */
/*   Updated: 2022/12/19 09:31:35 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter(long int from_integer, int flg);
static void		int_processor(long nbr, size_t len, char *to_ascii, int flg);

	// int		len_print;
	// len_print = 0;
//18L recursive
int	ft_itoa_rtnlen(int nbr, int len_print)
{
	char	*to_ascii;
	long	from_integer;
	size_t	len_string;
	int		flg;

	flg = 1;
	if (nbr < 0)
		flg = -1;
	from_integer = (long)nbr * flg;
	len_string = figure_counter(from_integer, flg);
	to_ascii = (char *)ft_calloc(len_string + 1, sizeof(char));
	if (to_ascii != NULL)
	{
		int_processor(from_integer, len_string, to_ascii, flg);
		len_print = ft_putstr_rtnlen(to_ascii, len_print);
		free(to_ascii);
	}
	return (len_print);
}
	// to_ascii[len_string] = '\0';
	// printf("\n%d\n", len_print);

//13L
static size_t	figure_counter(long int nbr, int flg)
{
	size_t	i;

	i = 0;
	if (nbr == 0)
		return (1);
	else if (flg < 0)
		i += 1;
	while (nbr > 0)
	{
		nbr /= 10;
		i += 1;
	}
	return (i);
}

//8L
static void	int_processor(long nbr, size_t len, char *to_ascii, int flg)
{
	while (len > 0)
	{
		len -= 1;
		to_ascii[len] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (flg < 0)
		to_ascii[0] = '-';
}

//6L
// static void	int_processor(long nbr, size_t len, char *to_ascii, int flg)
// {
// 	len -= 1;
// 	to_ascii[len] = nbr % 10 + '0';
// 	if (len > 0)
// 		int_processor(nbr / 10, len, to_ascii, flg);
// 	if (flg < 0)
// 		to_ascii[0] = '-';
// }
