/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 13:37:17 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/26 14:17:06 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_rangeMi(int start, int end)
{
	int	*ans;
	int size;
	int i;

	i = 0;
	size = (end - start);
	if (size < 0)
		size *= -1;
	ans = (int*)malloc(sizeof(int) * (size + 1));
	if (start < end)
	{
		while (start <= end)
		{
			ans[i] = start;
			start++;
			i++;
		}
	}
	else
	{
		while (start >= end)
		{
			ans[i] = start;
			start--;
			i++;
		}
	}
	return (ans);
}

int		*ft_range(int min, int max)
{
	int		n;
	int		*s;

	n = max >= min ? max - min : min - max;
	if (!(s = (int *)malloc(sizeof(int) * (n))))
		return (NULL);
	while (max != min)
		*s++ = max > min ? min++ : min--;
	*s = min;
	return (s - n);
}
