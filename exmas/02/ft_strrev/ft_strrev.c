/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 16:18:41 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/30 17:32:45 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strrev(char *str)
{
	char c;
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	while (str[i] != '\0')
		i++;
	k = i / 2;
	i--;
	while (j < k)
	{
		printf("i=%d, j=%d, k=%d", i, j, k);
		c = str[i];
		printf("este es c %c\n", c);
		str[i] = str[j];
		str[j] = c;
		i--;
		j++;
		//k /= 2;
	}
	return (str);
}
