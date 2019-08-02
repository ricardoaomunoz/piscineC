/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 14:17:31 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 14:49:52 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
#define LIST_H

typedef struct s_list t_list;

struct s_list
{
	char *str;
	t_list *next;
};
t_list *add_link(t_list *list, char *str);
void	print_list(t_list *list);
void	ft_putstr(char *str);
void	ft_putchar(char c);
#endif
