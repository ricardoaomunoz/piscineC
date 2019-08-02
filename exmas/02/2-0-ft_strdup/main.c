/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:10:16 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/24 20:22:22 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strdup(char *src);
#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("mine : %s\n", ft_strdup("hola como estas"));
	printf("man  : %s\n", strdup("hola como estas"));
	return (0);
}
