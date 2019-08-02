/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:18:47 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/31 12:39:39 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
 
int		ft_list_size(t_list *begin_list);
{
	t_list *elem;
	int count;

	count = 0;
	elem = begin_list;
	while (elem->next)
	{
		count++;
		elem = elem->next;
	}
	return (count);
}
