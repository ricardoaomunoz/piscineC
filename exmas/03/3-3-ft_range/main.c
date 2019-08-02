/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 14:06:54 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/26 14:24:43 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int     *ft_range(int start, int end);

int		main(void)
{
	int *a;
	int i;

	i = 0;
	a = ft_range(0, -3);
	printf("sizeof of array: %d\n", (int) sizeof(a));
   // printSizeOf(array);

    printf("Length of array: %d\n", (int)( sizeof(a) / sizeof(a[0]) ));
   // printLength(array);
	while (i < 4)
	{
		printf("%d ", a[i]);
		i++;
	}
	return (0);
}
