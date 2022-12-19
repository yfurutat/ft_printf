/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_rtnlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:37:07 by yuske             #+#    #+#             */
/*   Updated: 2022/12/19 10:52:45 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter_uint(unsigned int nbr);
static void		uint_processor(unsigned int nbr, size_t len, char *to_ascii);

	// int		len_print;
	// len_print = 0;
	// base = NULL;
	// if (specifier == 'u')
//19L
int	ft_utoa_rtnlen(unsigned int nbr, int len_print)
{
	char	*to_ascii;
	size_t	len_string;

	len_string = figure_counter_uint(nbr);
	to_ascii = (char *)ft_calloc((len_string + 1), sizeof(char));
	if (to_ascii != NULL)
	{
		uint_processor(nbr, len_string, to_ascii);
		len_print = ft_putstr_rtnlen(to_ascii, len_print);
		free(to_ascii);
	}
	return (len_print);
}

//11L
static size_t	figure_counter_uint(unsigned int nbr)
{
	size_t	i;

	i = 0;
	if (nbr == 0)
		i += 1;
	while (nbr > 0)
	{
		nbr /= 10;
		i += 1;
	}
	return (i);
}

static void	uint_processor(unsigned int nbr, size_t len, char *to_ascii)
{
	while (len > 0)
	{
		len -= 1;
		to_ascii[len] = nbr % 10 + '0';
		nbr /= 10;
	}
}
