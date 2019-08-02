/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:48:16 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 22:53:26 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *elem;

	if (*begin_list)
	{
		elem = *begin_list
		while (elem->next)
		{
			elem = elem->next
		}
		elem->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
