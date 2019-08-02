/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   power2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:53:41 by rosorio           #+#    #+#             */
/*   Updated: 2019/08/01 14:54:44 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0) 
		n /= 2;
	return ((n == 1) ? 1 : 0);
}

int		main()
{
	printf("%d\n", is_power_of_2(0));
	return (0);
}
