/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 23:31:39 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 23:34:42 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *elem;

	elem = begin_list;
	while (elem->next)
		elem = elem->next;
	return (&elem);

}
