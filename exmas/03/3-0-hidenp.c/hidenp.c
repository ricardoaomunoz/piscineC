/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 12:43:18 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/31 13:15:03 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		main(int q, char **argv)
{
	if (q == 3)
	{
		int i;
		int j;
		int ans;

		i = 0;
		j = 0;
		while (argv[1][i] != '\0' & argv[2][j] != '\0')
		{
			while (argv[2][j] != argv[1][i] && argv[2][j] != '\0')
				j++;
			i++;
		}
		if (argv[1][i] == '\0')
			printf("1\n");
		else
			printf("0\n");
	}
	else
		write(1, "\n", 1);
	return (0);
}
