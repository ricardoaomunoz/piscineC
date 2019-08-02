/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 10:07:45 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/19 15:43:50 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char	*withoutspaces(int num, char *str)
{
	int size;
	char *ans;
	int wich;
	int index;

	index = 0;
	size = 0;
	wich = 0;
	while (str[index] != '\0')
	{
		if (str[index] == ' ' || str[index] == '\n' ||
				str[index] == '\v' || str[index] == '\f' ||
				str[index] == '\r')
			index++;
		else
		{
			if (index == 0)
				wich++;
			else if (str[index - 1] == ' ' || str[index - 1] == '\n' || str[index - 1] == '\v' || str[index - 1] == '\f' || str[index - 1] == '\r' || str[index - 1] == '\t')
				wich++;
			if (wich == num)
			{
				//empezar  a contar
				ans[size] = str[index];
			}
			index++;

		}
	}
	printf("string to return: %s", ans);
	return (ans);
}

int		sizeofstr(char *str)
{
	int size;
	int index;

	index = 0;
	size = 0;
	while (str[index] != '\0')
	{
		if (str[index] == ' ' || str[index] == '\n' || str[index] == '\v' || str[index] == '\f' || str[index] == '\r' || str[index] == '\t')
			index++;
		else
		{ 
			if (index == 0)
			{
				size++;
				index++;
			}
			else if (str[index - 1] == ' ' || str[index - 1] == '\n' || str[index - 1] == '\v' || str[index - 1] == '\f' || str[index - 1] == '\r' || str[index - 1] == '\t')
			{
				size++;
				index++;
			}
			else
				index++;
		}
	}
	return (size);
}

void	ft_split_whitespaces(char *str)
{
	int index;
	int size;
	int start;
	char **ans;
	char *one;

	index = 0;
	start = 0;
	size = sizeofstr(str);
	printf("the size is %d", size);
	ans = malloc(size + 1);
	one = withoutspaces(size, str);

	//while (start < size)
	//{
	//	size = withoutspaces(start + 1)
	//}



}
