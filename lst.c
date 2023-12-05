/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aperrein <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 11:14:03 by aperrein          #+#    #+#             */
/*   Updated: 2023/03/23 09:52:29 by aperrein         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

void	print_list(t_list **begin_list)
{
	t_list	*cur;

	cur = *begin_list;
	while (cur)
	{
		ft_printf("%s\n", cur->content);
		cur = cur->next;
	}
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
//	t_list	*cur;

	if (begin_list == NULL || *begin_list == NULL)
		return;
//	cur = *begin_list;
	if (cmp((*begin_list)->content , data_ref) == 0)
	{
		*begin_list = (*begin_list)->next;
//		free(cur);
		ft_list_remove_if(begin_list, data_ref, cmp);
	}
//	cur = *begin_list;
	if (*begin_list)
		ft_list_remove_if(&(*begin_list)->next, data_ref, cmp);
}
