/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 23:13:22 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 23:17:32 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		ft_list_size(t_list *begin_list)
{
	int size;
	t_list *elem;

	size = 0;
	elem = begin_list;
	while (elem->next)
	{
		elem = elem->next;
		size++;
	}
	return (size);

}
