# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rhortens <rhortens@student.42heilbronn.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 19:55:23 by rhortens          #+#    #+#              #
#    Updated: 2022/11/30 20:00:18 by rhortens         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

CFLAGS	=	-Wall -Wextra -Werror

FILES	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memmove.c \
			ft_memset.c \
			ft_memcpy.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \

BONUS	=	ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstsize.c \
			ft_lstlast.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_lstiter.c \
			ft_lstmap.c \

COMP	= cc

LIBFT	= libft.h

OBJS	= $(FILES:.c=.o)

OBJSBON	= $(BONUS:.c=.o)

RM		= rm -f

all: $(NAME)

.c.o:
		$(COMP) $(CFLAGS) -c -I $(LIBFT) $< -o ${<:.c=.o}

$(NAME) : $(OBJS)
		ar rcs $(NAME) $(OBJS)
		ranlib $(NAME)

bonus: $(OBJSBON)
		ar rcs $(NAME) $(OBJSBON)
		@ranlib $(NAME)

clean:
		$(RM) $(OBJS) $(OBJSBON)

fclean: clean
		$(RM) $(NAME)

re: fclean
		$(MAKE) all

.PHONY: all clean fclean re bonus

