/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/29 15:45:57 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/29 16:38:28 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list
{
	void	*data;
	struct s_list	*next;
} t_list;

t_list	*ft_create_elem(void *data);
void    ft_putchar(char c);
void	ft_putstr(char *str);

#endif
