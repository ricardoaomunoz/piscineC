/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:20:56 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 14:47:15 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "list.h"

int		main(void)
{
	t_list *list;

	list = NULL;

	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");

	print_list(list);
	return (0);
}
