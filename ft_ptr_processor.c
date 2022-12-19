/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptr_processor.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 14:56:07 by yuske             #+#    #+#             */
/*   Updated: 2022/12/19 10:51:47 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static size_t	figure_counter_hex(uintptr_t nbr);
static int		ft_putptr(uintptr_t nbr, size_t figure);
// static void		ft_putptr(uintptr_t nbr, size_t figure, int *len_print);

	// int		len_print;
//7L
int	ft_ptr_processor(uintptr_t additional_arg_nbr, int len_print)
{
	size_t	figure;

	len_print += write(1, "0x", 2);
	figure = figure_counter_hex(additional_arg_nbr);
	len_print += ft_putptr(additional_arg_nbr, figure);
	return (len_print);
}
	// printf("\n%d\n", len_print);

//7L
// int	ft_ptr_processor(uintptr_t additional_arg_nbr)
// {
// 	int		len_print;
// 	size_t	figure;

// 	len_print = write(1, "0x", 2);
// 	figure = figure_counter_hex(additional_arg_nbr);
// 	ft_putptr(additional_arg_nbr, figure, &len_print);
// 	return (len_print);
// }
// 	printf("\n%d\n", len_print);
	// size_t	len_base;

	// printf("\n%zu\n", additional_arg_nbr);
	// len_base = ft_strlen(base);
	// if (additional_arg_nbr == 0)
	// 	len_print += write(1, "0", 1);
	// printf("%zu\n", len_base);
	// else
	// {
		// printf("\n%zu\n", figure);
	// }

//11L
static size_t	figure_counter_hex(uintptr_t nbr)
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

//23L
static int	ft_putptr(uintptr_t nbr, size_t figure)
{
	size_t	i;
	size_t	divider;
	int		len_print;
	char	*base;

	i = 1;
	divider = 1;
	len_print = 0;
	base = "0123456789abcdef";
	while (i < figure)
	{
		divider *= 16;
		i += 1;
	}
	i = 0;
	while (i < figure)
	{
		len_print += write(1, &base[nbr / divider % 16], 1);
		nbr %= divider;
		divider /= 16;
		i += 1;
	}
	return (len_print);
}

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
