/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/25 18:59:26 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/25 22:35:08 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//00000001 -> 1
//00000010 -> 2
//00000100 -> 4
//00001000 -> 8
//00010000 -> 16
//00100000 -> 32
//01000000 -> 64
//10000000 -> 128
#include <stdio.h>

int				power(int num, int pow)
{
	if (pow != 0)
		return (num * power(num, pow-1));
	else
		return (1);
}
unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char savebits;
	int i;

	i = 7;
	savebits = 0;
	while(i != 0)
	{
		printf("%d | %d\n", savebits, (octet & (power(2, 7 - i)) >> (6 - i)));
		savebits = savebits | (octet & (power(2, 7 - i)));
		printf("savebits: %d\n", savebits);
		savebits = savebits << 1;
		printf("savebits: %d\n", savebits);
		printf("-----------------\n");
		i--;
	}
	return (savebits);
}
