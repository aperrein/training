# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aperrein <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/23 15:38:12 by aperrein          #+#    #+#              #
#    Updated: 2023/03/20 11:16:50 by aperrein         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME	=	projet_test

SRC	=	main.c bits.c lst.c

OBJ_DIR =	OBJ/

OBJ	=	$(SRC:%.c=$(OBJ_DIR)%.o)

RM	=	rm -f

CFLAGS	=	-Wall -Werror -Wextra

all	:	$(OBJ_DIR) $(NAME)

$(OBJ_DIR)%.o :	%.c
		gcc $(CFLAGS) -c $< -o $@ 

$(OBJ_DIR) :
		mkdir $(OBJ_DIR)


$(NAME)	:	make_lib $(OBJ)
		gcc $(CFLAGS) -o $(NAME) $(OBJ) libft/libft.a

make_lib :	
		@make -s -C libft/
clean	:	
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean $(NAME)
