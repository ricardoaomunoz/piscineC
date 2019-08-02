/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 15:25:19 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/30 15:57:59 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "files.h"

void	ft_operations(char **argv)
{
	int x;
	int y;

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	if (argv[2][0] == '+')
		printf("%d\n", ft_sum(x, y));
	else if (argv[2][0] == '-')
		printf("%d\n", ft_sum(x, y));
	else if (argv[2][0] == '*')
		printf("%d\n", ft_mult(x, y));
	else if ((argv[2][0] == '/' || argv[2][0] == '%') && y == 0)
		printf("\n");
	else if (argv[2][0] == '/')
		printf("%d\n", ft_div(x, y));
	else if(argv[2][0] == '%')
		printf("%d\n", ft_mod(x, y));
	else
		printf("\n");


}

int		main(int q, char **argv)
{
	if (q == 4)
	{
		ft_operations(argv);	
	}
	else
		printf("\n");
	return(0);
}
