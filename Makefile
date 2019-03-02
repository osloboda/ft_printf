# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: osloboda <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/09 14:17:40 by osloboda          #+#    #+#              #
#    Updated: 2019/02/01 22:32:49 by osloboda         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Werror -Wextra
CCFLAGS = -O3

INCL = includes/

ODIR = obj
SDIR = srcs
SRC = ft_printf.c cstr.c ft_itoa.c ft_strdup.c ft_strlen.c ft_strchr.c ft_strsub.c\
ft_strncpy.c ft_atoi.c ft_isdigit.c ft_putnbr.c ft_putchar.c ft_strjoin.c ft_strcat.c\
ft_strcpy.c ft_memalloc.c ft_memcpy.c ft_memset.c ft_strnew.c ft_isdigit.c ft_strcmp.c\
createfield.c fill.c fitoa.c fts.c taketype.c precision.c powitoab.c
OBJS = $(addprefix $(ODIR)/,$(SRC:.c=.o))

MAKE = make

all: $(NAME)

$(NAME): $(OBJS) $(ODIR)
	@ar rc $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo \\033[32m======[Compiled]========\\033[0m

$(ODIR)/%.o: $(SDIR)/%.c $(INCL)ft_printf.h
	@mkdir -p obj
	$(CC) $(FLAGS) -I $(INCL) -o $@ -c $<

clean:
	@rm -rf $(OBJS) $(ODIR)
	@echo \\033[34m======[Cleaned]=========\\033[0m

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
