/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itohex_rtnlen.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:56:07 by yuske             #+#    #+#             */
/*   Updated: 2022/12/19 15:51:12 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter_hex(unsigned int nbr);
static void		hex_processor(unsigned int nbr, size_t figure, char *to_ascii);
static char		*ft_toupper_str(char *str);

//14L
int	ft_itohex_rtnlen(unsigned int nbr, int len_print, const char specifier)
{
	char	*to_ascii;
	size_t	figure;

	figure = figure_counter_hex(nbr);
	to_ascii = (char *)ft_calloc(figure + 1, sizeof(char));
	if (to_ascii != NULL)
	{
		hex_processor(nbr, figure, to_ascii);
		if (specifier == 'X')
			ft_toupper_str(to_ascii);
		len_print += ft_putstr_rtnlen(to_ascii, len_print);
		free(to_ascii);
	}
	return (len_print);
}
	// printf("\n%d\n", len_print);

//11L
static size_t	figure_counter_hex(unsigned int nbr)
{
	size_t	i;

	i = 0;
	if (nbr == 0)
		i = 1;
	while (nbr > 0)
	{
		nbr /= 16;
		i += 1;
	}
	return (i);
}
	// printf("%zu", nbr);
	// printf("%zu", len_base);
	// printf("%zu", i);

	// int		len_print;
	// len_print = 0;
//24L
static void	hex_processor(unsigned int nbr, size_t figure, char *to_ascii)
{
	size_t	i;
	size_t	divider;
	int		to_c;

	i = 1;
	divider = 1;
	to_c = 0;
	while (i < figure)
	{
		divider *= 16;
		i += 1;
	}
	i = 0;
	while (i < figure)
	{
		to_c = nbr / divider % 16;
		if (to_c <= 9)
			to_ascii[i] = to_c + '0';
		else if (to_c > 9)
			to_ascii[i] = to_c + ('a' - 10);
		nbr %= divider;
		divider /= 16;
		i += 1;
	}
}
	// return (len_print);

//7L
static char	*ft_toupper_str(char *str)
{
	while (*str != '\0')
	{
		if (*str >= 'a' && *str <= 'z')
			*str += ('A' - 'a');
		str += 1;
	}
	return (str);
}

// static int		ft_puthex(unsigned int nbr, size_t figure,
// 					const char specifier);
// static void		ft_putptr(uintptr_t nbr, size_t figure, int *len_print);

	// int		len_print;
//7L
// int	ft_itohex_rtnlen(unsigned int nbr, int len_print, const char specifier)
// {
// 	size_t	figure;

// 	figure = figure_counter_hex(nbr);
// 	len_print += ft_puthex(nbr, figure, specifier);
// 	return (len_print);
// }

//20L
// static void	ft_putptr(uintptr_t nbr, size_t figure, int *len_print)
// {
// 	size_t	i;
// 	size_t	divider;
// 	char	*base;

// 	i = 1;
// 	divider = 1;
// 	base = HEX;
// 	while (i < figure)
// 	{
// 		divider *= 16;
// 		i += 1;
// 	}
// 	i = 0;
// 	while (i < figure)
// 	{
// 		*len_print += write(1, &base[nbr / divider % 16], 1);
// 		nbr %= divider;
// 		divider /= 16;
// 		i += 1;
// 	}
// }
	// len_base = ft_strlen(base);
		// divider *= len_base;
		// len_print += write(1, &base[nbr / divider % len_base], 1);
		// divider /= len_base;
	// len_print += 1;
	// return (len_print);

//25L
// static int	ft_puthex(unsigned int nbr, size_t figure, const char specifier)
// {
// 	size_t	i;
// 	size_t	divider;
// 	int		len_print;
// 	char	*base;

// 	i = 1;
// 	divider = 1;
// 	len_print = 0;
// 	base = "0123456789abcdef";
// 	if (specifier == 'X')
// 		base = "0123456789ABCDEF";
// 	while (i < figure)
// 	{
// 		divider *= 16;
// 		i += 1;
// 	}
// 	i = 0;
// 	while (i < figure)
// 	{
// 		len_print += write(1, &base[nbr / divider % 16], 1);
// 		nbr %= divider;
// 		divider /= 16;
// 		i += 1;
// 	}
// 	return (len_print);
// }

//25L
// static int	ft_putptr(uintptr_t nbr, size_t figure)
// {
// 	size_t	i;
// 	size_t	divider;
// 	size_t	len_base;
// 	int		len_print;
// 	char	*base;

// 	i = 1;
// 	divider = 1;
// 	len_print = 0;
// 	base = HEX;
// 	len_base = ft_strlen(base);
// 	while (i < figure)
// 	{
// 		divider *= len_base;
// 		i += 1;
// 	}
// 	i = 0;
// 	while (i < figure)
// 	{
// 		len_print += write(1, &base[nbr / divider % len_base], 1);
// 		nbr %= divider;
// 		divider /= len_base;
// 		i += 1;
// 	}
// 	return (len_print);
// }

// int	main(void)
// {
// 	// ft_ptr_processor((uintptr_t)NULL, HEX);
// 	printf("\n");
// 	ft_ptr_processor((uintptr_t)write, HEX);
// 	ptr_processor((uintptr_t)write, HEX);
// 	return (0);
// }
