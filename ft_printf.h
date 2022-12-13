/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 18:27:33 by yuske             #+#    #+#             */
/*   Updated: 2022/12/13 17:34:20 by yuske            ###   ########.fr       */
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

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t len_cpy);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *str, int ch, size_t n);
void	ft_bzero(void *array, size_t n);
void	*ft_calloc(size_t nbr, size_t size);
char	*ft_strdup(const char *str);
char	*ft_itoa(int n);
void	ft_putchar_fd(char ch, int fd);
void	ft_putstr_fd(char *str, int fd);

int		ft_printf(const char *format, ...);

#endif