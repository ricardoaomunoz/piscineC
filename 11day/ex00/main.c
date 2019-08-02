/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 16:28:04 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 16:38:53 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->data);
		list = list->next;
	}
}

int		main(void)
{
	t_list	*list;

	list = ft_create_elem("hola");
	list = ft_create_elem("chao");
	print_list(list);
}
