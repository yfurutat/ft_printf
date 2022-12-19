/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:27:33 by yuske             #+#    #+#             */
/*   Updated: 2022/12/19 13:46:48 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <stdbool.h>
# include <errno.h>
# include <stdint.h>

# include <stddef.h>
# include <assert.h>
# include <math.h>
# include <inttypes.h>

# define HEX "0123456789abcdef"

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t len_cpy);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int ch, size_t n);
void	ft_bzero(void *array, size_t n);
void	*ft_calloc(size_t nbr, size_t size);
char	*ft_strdup(const char *str);
// char	*ft_itoa(int n);
void	ft_putchar_fd(char ch, int fd);
void	ft_putstr_fd(char *str, int fd);
// char	ft_toupper(char *c);

int		ft_printf(const char *input, ...);
int		ft_putchar_int(int additional_arg_c);
int		ft_putstr_rtnlen(char *additional_arg_str, int len_print);
int		ft_ptr_processor(uintptr_t additional_arg_nbr, int len_print);
int		ft_itoa_rtnlen(int additional_arg_nbr, int len_print);
int		ft_utoa_rtnlen(unsigned int additional_arg_nbr, int len_print);
int		ft_itohex_rtnlen(unsigned int nbr, int len_print, const char specifier);

#endif