/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 22:54:00 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 23:12:31 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list elem;

	if (*begin_list)
	{
		elem = ft_create_elem(data);
		elem->next = *begin_list;
		*begin_list = elem;
	}
	
}
