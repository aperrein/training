/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bits.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:29:06 by aperrein          #+#    #+#             */
/*   Updated: 2023/03/24 13:15:36 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft/libft.h"

unsigned char	swap_bits(unsigned char octet)
{
	return ((octet << 4) | (octet >>4));
}

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char	res;
	int	bit;

	bit = 0;
	res = 0;
	while (bit < 8)
	{
		res = res << 1;
		res = res | (octet & 1);
		octet = octet >> 1;
		bit++;
	}
	return (res);
}

void	print_bits(unsigned char octet)
{
	int	bit;

	bit = 0 ;
	while (bit < 8)
	{
		if (octet & 128)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		octet = octet << 1;
		bit++;
	}
}
