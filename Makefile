_SRCS_	=	printf\
			strlen\
			putchar_str\
			ptr_processor\
			utoa_rtnlen\
			itoa_rtnlen\
			itohex_rtnlen\
			memset\
			bzero\
			calloc\
			toupper\
			# putchar_fd\
			# itoa\
			# memcpy\
			# strdup\
			# strlcpy
			
SRCS_	=	$(addprefix ft_, $(_SRCS_))
SRCS	=	$(addsuffix .c, $(SRCS_))
OBJS	=	$(SRCS:.c=.o)

NAME	=	libftprintf.a
CC		=	cc
CFLAGS	=	-Wall -Wextra -Werror
RM		=	rm -f
AR		=	ar -rcs
OUT		=	a.out
MAIN	=	main.c

$(NAME)	:	$(OBJS)
			$(AR) $(NAME) $(OBJS)
			ranlib $(NAME)

all		:	$(NAME)
out		:	all
			$(CC) $(CFLAGS) $(NAME) $(MAIN)
clean	:
			$(RM) $(OBJS)
fclean	:	clean
			$(RM) $(NAME)
oclean	:	fclean
			$(RM) $(OUT)
re		:	fclean all

# clone	:	git clone git@vogsphere-v2.42tokyo.jp:vogsphere/intra-uuid-a406f953-c9b9-4ea2-be9e-23519a2a78d7-4562857-yfurutat
commit	:	fclean
			git add .
			git commit -m "commit through Makefile"
			git log

.PHONY	:	all out clean fclean oclean re commit
