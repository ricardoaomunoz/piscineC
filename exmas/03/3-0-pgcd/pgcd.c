/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 13:15:41 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/31 14:17:34 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	highest_denominator(int x, int y)
{
	int ans;
	int max;
	int i;

	i = 1;
	if (x >= y)
		max = y;
	else
		max = x;
	while (i <= max)
	{
		if (x % i == 0 && y % i == 0)
			ans = i;
		i++;
	}
	printf("%d\n", ans);
}

int		main(int q, char **argv)
{
	int x;
	int y;

	if (q == 3)
	{
		x = atoi(argv[1]);
		y = atoi(argv[2]);
		highest_denominator(x, y);
	}
	else
		printf("\n");	
	return (0);
}
