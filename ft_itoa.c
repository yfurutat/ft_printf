/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 20:37:07 by yuske             #+#    #+#             */
/*   Updated: 2022/12/02 18:51:09 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter(long int from_integer, int flg);
// static void		int_processor(long nbr, size_t len, char *toa);

//25L
char	*ft_itoa(int n)
{
	char	*to_ascii;
	long	from_integer;
	int		flg;
	size_t	len;

	from_integer = (long)n;
	flg = 1;
	if (n < 0)
	{
		flg = -1;
		from_integer *= flg;
	}
	len = figure_counter(from_integer, flg);
	to_ascii = (char *)ft_calloc((len + 1), sizeof(char));
	if (!to_ascii)
		return (NULL);
	while (len > 0)
	{
		len -= 1;
		to_ascii[len] = from_integer % 10 + '0';
		from_integer /= 10;
	}
	if (n < 0)
		to_ascii[0] = '-';
	return (to_ascii);
}

//13L
static size_t	figure_counter(long int from_integer, int flg)
{
	size_t	i;

	i = 0;
	if (from_integer == 0)
		return (1);
	else if (flg < 0)
		i += 1;
	while (from_integer > 0)
	{
		from_integer /= 10;
		i += 1;
	}
	return (i);
}

//3. 16L iterative
// char	*ft_itoa(int n)
// {
// 	char	*to_ascii;
// 	long	from_integer;
// 	size_t	len;

// 	from_integer = n;
// 	if (n < 0)
// 		from_integer *= -1;
// 	len = figure_counter(from_integer, n);
// 	to_ascii = (char *)ft_calloc(sizeof(char), len + 1);
// 	if (!to_ascii)
// 		return (NULL);
// 	to_ascii[len] = '\0';
// 	int_processor(from_integer, --len, to_ascii);
// 	if (n < 0)
// 		to_ascii[0] = '-';
// 	return (to_ascii);
// }

// static void	int_processor(long from_integer, size_t len, char *to_ascii)
// {
// 	to_ascii[len] = from_integer % 10 + '0';
// 	if (from_integer / 10 && len--)
// 		int_processor(from_integer / 10, len, to_ascii);
// }
