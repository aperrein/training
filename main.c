/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:10:05 by aperrein          #+#    #+#             */
/*   Updated: 2023/04/25 12:02:41 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <stdio.h>

unsigned char	swap_bits(unsigned char octet);
unsigned char	reverse_bits(unsigned char octet);
void	print_bits(unsigned char octet);
void	print_list(t_list **begin_list);
void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());


int	main(int argc, char *argv[])
{
	int	i;
	unsigned char	c;

	i = 0;
	c = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			c = c | (argv[1][i] - '0');
			i++;
			if (i < 8)
				c = c << 1;
		}
	}
	printf("%c\n", c);
	print_bits(c);
	ft_printf("\n");
	c = reverse_bits(c);
	print_bits(c);
	ft_printf("\n");
	c = swap_bits(c);
	print_bits(c);
	ft_printf("\n");
	return (0);
}
/*
int	main(void)
{
	char	*a;
	char	*b;
	char	*c;
	t_list	*lst1;
	t_list	*lst2;
	t_list	*lst3;
	t_list	*lst4;

	a = "testaa";
	b = "testb";
	c = "testc";
	lst1 =malloc(sizeof(t_list));
	lst2 =malloc(sizeof(t_list));
	lst3 =malloc(sizeof(t_list));
	lst4 =malloc(sizeof(t_list));
	lst1->content = a;
	lst2->content = b;
	lst3->content = c;
	lst4->content = a;
	lst1->next = lst2;
	lst2->next = lst3;
	lst3->next = lst4;
	lst4->next = 0;
	print_list(&lst1);
	ft_printf("-----------\n");
	ft_list_remove_if(&lst1, a, strcmp);
	print_list(&lst1);
}*/
