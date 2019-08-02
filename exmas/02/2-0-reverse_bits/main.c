/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 21:06:04 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/25 21:19:56 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int				power(int num, int pow);
unsigned char	reverse_bits(unsigned char octet);

int		main(void)
{
	//printf("potencia 3^3 %d", power(3, 3));
	printf("este es el char %d y reverso es %d", '&', reverse_bits('&'));
}
