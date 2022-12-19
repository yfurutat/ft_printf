/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 20:51:34 by yuske             #+#    #+#             */
/*   Updated: 2022/12/19 16:44:42 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
// #include "libft/libft.h"
#include <stdio.h>

int	main(void)
{
	int	i;

	// // i = 0;
	i = INT_MAX;
	printf("#c\n");
	printf("org: %c\t%c\t%c\t%c\t%s\n", 'c', 'R', '%', '9', "str");
	ft_printf("ft_: %c\t%c\t%c\t%c\t%s\n\n", 'c', 'R', '%', '9', "str");

	printf("#percent\n");
	ft_printf("ft_: #percent\n");
	printf("org: %%\n");
	ft_printf("ft_: %%\n\n");

	ft_printf("str%%%cstr%c%%%sstr\n", '%', '%', "str");
	ft_printf("%d\n", ft_printf);
	// printf("%zd\n", ft_printf);

	printf("\n#str\n");
	ft_printf("%s\t%s\t%s\n", "42Tokyo", "", NULL);
	printf("%s\t%s\t%s\n\n", "42Tokyo", "", (char *) NULL);

	printf("#int\n");
	ft_printf("%d\t%d\t%d\t%d\n", 1234567, 0, INT_MAX, INT_MIN);
	printf("%d\t%d\t%d\t%d\n\n", 1234567, 0, INT_MAX, INT_MIN);
	ft_printf("%d\t%i\t%d\t%i\n", SHRT_MAX, SHRT_MIN, INT_MAX, INT_MIN);
	printf("%d\t%i\t%d\t%i\n\n", SHRT_MAX, SHRT_MIN, INT_MAX, INT_MIN);
	ft_printf("%i\t%d\t%i\t%d\n", SHRT_MAX + 1, SHRT_MIN - 1, INT_MAX - 1, INT_MIN + 1);
	printf("%i\t%d\t%i\t%d\n\n", SHRT_MAX + 1, SHRT_MIN - 1, INT_MAX - 1, INT_MIN + 1);
	//try intentional overflow, too. success if error occurs in both.

	printf("#uint\n");
	printf("org:\t%u %u %u %u %u %lu\n", 75692, 100, 0, UINT_MAX, CHAR_MAX, ULONG_MAX);
	ft_printf("ft_:\t%u %u %u %u %u %lu\n\n", 75692, 100, 0, UINT_MAX, CHAR_MAX, ULONG_MAX);
	printf("org:\t%u %u %u %u %u\n", INT_MAX, INT_MIN, CHAR_MIN, UINT_MAX + 1, UINT_MAX - 1);
	ft_printf("ft_:\t%u %u %u %u %u\n\n", INT_MAX, INT_MIN, CHAR_MIN, UINT_MAX + 1, UINT_MAX - 1);

	printf("#hex\n");
	printf("   %x %x %x\n", i, 255, UINT_MAX);
	ft_printf("ft %x %x %x\n\n", i, 255, UINT_MAX);

	printf("#HEX\n");
	printf("   %X %X %X\n", i, 255, UINT_MAX);
	ft_printf("ft %X %X %X\n\n", i, 255, UINT_MAX);

	printf("#ptr\n");
	printf("%p\t%p\t%p\t%p\n", &i, (void *)SIZE_MAX, NULL, (void *)0);
	ft_printf("%p\t%p\t%p\t%p\n\n", &i, SIZE_MAX, NULL, 0);

	printf("#mix\n");
	printf("   abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n", 'd', "def", 1, 10,
		100, 100, 100, &i);
	ft_printf("ft abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n\n", 'd', "def", 1, 10,
		100, 100, 100, &i);

	printf("#return\n");
	printf("   %d\n", printf("abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n", 'c',
			"str", 1, 10, 100, 255, 255, &i));
	ft_printf("ft %d\n", ft_printf("abc\t%c\t%s\t%d\t%i\t%u\t%x\t%X\t%p\t%%\n\n", 'c',
			"str", 1, 10, 100, 255, 255, &i));
	// ft_printf("ft write:\t\t%p\n", write);
	// ft_printf("write:\t\t%p\n", write);
	// printf("write:\t\t%p\n", write);
	// printf("read:\t\t%p\n", read);
	// printf("printf:\t\t%p\n", printf);
	// printf("scanf:\t\t%p\n", scanf);
	// printf("fprintf:\t%p\n", fprintf);
	// printf("exit:\t\t%p\n", exit);
	// printf("free:\t\t%p\n", free);
	// printf("malloc:\t\t%p\n", malloc);
	// printf("calloc:\t\t%p\n", calloc);
	// printf("realloc:\t%p\n", realloc);
	// printf("abort:\t\t%p\n", abort);
	// printf("sigabrt:\t%p\n", (void *)SIGABRT);
	// printf("sigsegv:\t%p\n", (void *)SIGSEGV);
	// printf("sigbus:\t\t%p\n", (void *)SIGBUS);
	printf("NULL:\t\t%p\n", NULL);
	ft_printf("ft NULL:\t\t%p\n", NULL);
	printf("0:\t\t%p\n", (void *)0);
	ft_printf("ft 0:\t\t%p\n", (void *)0);
	printf("\\0:\t\t%p\n", (void *) '\0');
	ft_printf("ft \\0:\t\t%p\n", (void *) '\0');
	printf("charmax:\t%p\n", (void *)CHAR_MAX);
	ft_printf("ft charmax:\t%p\n", (void *)CHAR_MAX);
	printf("ucharmax:\t%p\n", (void *)UCHAR_MAX);
	ft_printf("ft ucharmax:\t%p\n", (void *)UCHAR_MAX);
	printf("charmin:\t%p\n", (void *)CHAR_MIN);
	ft_printf("ft charmin:\t%p\n", (void *)CHAR_MIN);
	printf("intmax:\t\t%p\n", (void *)INT_MAX);
	ft_printf("ft intmax:\t%p\n", (void *)INT_MAX);
	printf("intmin:\t\t%p\n", (void *)INT_MIN);
	ft_printf("ft intmin:\t%p\n", (void *)INT_MIN);
	printf("uintmax:\t%p\n", (void *)UINT_MAX);
	ft_printf("ft uintmax:\t%p\n", (void *)UINT_MAX);
	printf("ulongmax:\t%p\n", (void *)ULONG_MAX);
	ft_printf("ft ulongmax:\t%p\n", (void *)ULONG_MAX);
	// // printf("ulongmax:\t%p\n", (void *)n);
	// printf("sizemax:\t%p\n", (void *)SIZE_MAX);
	// printf("ssizemax:\t%p\n", (void *)SSIZE_MAX);
	// printf("uintptrmax:\t%p\n", (void *)UINTPTR_MAX);
	return (0);
}
