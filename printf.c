/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yuske <yuske@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 18:59:52 by yuske             #+#    #+#             */
/*   Updated: 2022/12/19 12:06:25 by yuske            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

// int	main(void)
// {
// 	void	*ptr;
// 	char	*str;
// 	// char ptr1[] = {'h', 'e', 'l', 'l', 'o'};

// 	ptr = NULL;
// 	str = NULL;
// 	// ptr1 = NULL;
// 	str = "abcde";
// 	printf("character %c\n", 'a');
// 	printf("pointer %p\n", ptr);//ポインターの指しているメモリ番地を16進数で
// 	printf("pointer %p\n", str);
// 	printf("pointer %p\n", "abcde");
// 	printf("string %s\n", "abcde");
// 	printf("decimal %d\n", -123);
// 	printf("integer %i\n", -123);
// 	printf("unsigned %u\n", -123);
// 	// printf("pointer %p\n", str);
// 	printf("hexadecimal lower %x\n", 126);
// 	printf("hexadecimal upper %X\n", '~');
// 	printf("hexadecimal lower %x\n", 'z');
// 	printf("hexadecimal upper %X\n", 'z');
// 	printf("percent %%\n");
// 	return (0);
// }

// void	ft_putchar_fd(char c, int fd);
// int	ft_putchar_fdint(char c, int fd);

// int	main(void)
// {
// 	int	len;

// 	len = 0;
// 	len += write(1, "%", 1);
// 	// len += ft_putchar_fd('%', 1);
// 	// len += ft_putchar_fdint('%', 1);
// 	printf("%d", len);
// 	return (len);
// }

#include <stdio.h>
#include <limits.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char 			c1[2] = {'A', '\0'};
	unsigned long	n;

	n = ULONG_MAX;
	// printf(0);//sigsegv
	// printf(NULL);//sigsegv
	printf("");//print nothing
	printf("%d\n", SIGABRT);//6

	printf("d:\t\t%d\n", 2000 / 80 % 16);
	printf("d:\t\t%d\n", 2000 % 80);
	printf("c1:\t\t%p\n", c1);
	printf("empty:\t\t%p\n", "");
	printf("TEST:\t\t%p\n", "TEST");
	printf("main:\t\t%p\n\n", main);

	printf("write:\t\t%p\n", write);
	printf("read:\t\t%p\n", read);
	printf("printf:\t\t%p\n", printf);
	printf("scanf:\t\t%p\n", scanf);
	printf("fprintf:\t%p\n", fprintf);
	printf("exit:\t\t%p\n", exit);
	printf("free:\t\t%p\n", free);
	printf("malloc:\t\t%p\n", malloc);
	printf("calloc:\t\t%p\n", calloc);
	printf("realloc:\t%p\n", realloc);
	printf("abort:\t\t%p\n", abort);
	printf("sigabrt:\t%p\n", (void *)SIGABRT);
	printf("sigsegv:\t%p\n", (void *)SIGSEGV);
	printf("sigbus:\t\t%p\n", (void *)SIGBUS);
	printf("NULL:\t\t%p\n", NULL);
	printf("0:\t\t%p\n", (void *)0);
	printf("\\0:\t\t%p\n", (void *) '\0');
	printf("charmax:\t%p\n", (void *)CHAR_MAX);
	printf("ucharmax:\t%p\n", (void *)UCHAR_MAX);
	printf("charmin:\t%p\n", (void *)CHAR_MIN);
	printf("intmax:\t\t%p\n", (void *)INT_MAX);
	printf("intmin:\t\t%p\n", (void *)INT_MIN);
	printf("uintmax:\t%p\n", (void *)UINT_MAX);
	printf("ulongmax:\t%p\n", (void *)ULONG_MAX);
	printf("ulongmax:\t%p\n", (void *)n);
	printf("sizemax:\t%p\n", (void *)SIZE_MAX);
	printf("ssizemax:\t%p\n", (void *)SSIZE_MAX);
	printf("uintptrmax:\t%p\n", (void *)UINTPTR_MAX);
	return (0);
}
	// char 			c2 = 'B';
	// printf("%p\n", c2);
	// printf("%p\n", n);
	// printf("0: %p\n", (void *)c2);

// void	ft_putchar_fd(char c, int fd)
// {
// 	write(fd, &c, 1);
// }

// int	ft_putchar_fdint(char c, int fd)
// {
// 	return (write(fd, &c, 1));
// }

// int	ft_putchar_fdint(char c, int fd)
// {
// 	write(fd, &c, 1);
// 	return (1);
// }
