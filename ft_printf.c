/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:03:29 by yuske             #+#    #+#             */
/*   Updated: 2022/12/19 10:46:00 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	multi_converter(va_list args, const char specifier, int len_print);

//23L
int	ft_printf(const char *input, ...)
{
	va_list	args;
	size_t	i;
	int		len_print;

	i = 0;
	len_print = 0;
	va_start(args, input);
	while (input[i] != '\0')
	{
		if (input[i] == '%')
		{
			i += 1;
			if (input[i] == '%')
				len_print += write(1, &input[i], 1);
			else
				len_print = multi_converter(args, input[i], len_print);
		}
		else
			len_print += ft_putchar_int(input[i]);
		i += 1;
	}
	va_end(args);
	return (len_print);
}
	// printf("%d\n", len_print);
			// else if (input[i] == 'c')
			// 	len_print += ft_putchar_int(va_arg(args, int));

	// int	len_print;

	// len_print = 0;
//17L
static int	multi_converter(va_list args, const char specifier, int len_print)
{
	if (specifier == 'c')
		len_print += ft_putchar_int(va_arg(args, int));
	else if (specifier == 's')
		len_print = ft_putstr_rtnlen(va_arg(args, char *), len_print);
	else if (specifier == 'p')
		len_print = ft_ptr_processor(va_arg(args, uintptr_t), len_print);
	else if (specifier == 'd' || specifier == 'i')
		len_print = ft_itoa_rtnlen(va_arg(args, int), len_print);
	else if (specifier == 'u')
		len_print = ft_utoa_rtnlen(va_arg(args, unsigned int), len_print);
	else if (specifier == 'x' || specifier == 'X')
		len_print = ft_itohex_rtnlen(va_arg(args, unsigned int),
				len_print, specifier);
	return (len_print);
}
