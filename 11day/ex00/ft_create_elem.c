/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:49:58 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 16:27:56 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

t_list		*ft_create_elem(void *data)
{
	t_list *list;
	list = malloc(sizeof(t_list));

	if (list)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}
