/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:36:30 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 14:38:59 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list *add_link(t_list *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}
