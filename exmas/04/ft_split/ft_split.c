/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/01 14:58:28 by rosorio           #+#    #+#             */
/*   Updated: 2019/08/01 16:33:33 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int cantidad(char *str)
{
	int q;
	int i;

	q = 1;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	i = i + 1;
	while (str[i] != '\0')
	{
		if(((str[i] < 9 || str[i] > 13) && str[i] != ' ') && (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n'))
			q++;
		i++;
	}
	return (q);
}

char	*save_each_one(int size, int i, char *str)
{
	char *each_one;

	each_one = (char*)malloc(sizeof(char) * (size + 1));
	each_one[size] = '\0';
	size--;
	while(size >= 0)
	{
		//printf("save=%c\n", str[i - 1]);
		each_one[size] = str[i - 1];
		i--;
		size--;
	}
	return (each_one);

}

char	**ft_split(char *str)
{
	int i;
	int j;
	int x;
	int q;
	char *cada_una;
	char **ans;

	x = 0;
	q = cantidad(str);
//	printf("cantidad=%d\n", q);
	ans = (char**)malloc(sizeof(char*) * (q + 1));
	i = 0;
	while (str[i] != '\0')
	{
		while ((str[i] >= 9 && str[i] <= 13 && str[i] != '\0') || str[i] == ' ' )
			i++;
		j = 0;
		while ((str[i] < 9 || str[i] > 13) && str[i] != ' ' && str[i] != '\0')
		{
			i++;
			j++;
		}
		if (j > 0)
		{
		//	printf("cantidad each one=%d\n", j);
		//	printf("retorno de save %s\n", save_each_one(j, i, str));
			ans[x] = save_each_one(j, i, str);
			x++;
		}
	}
	ans[x] = 0;
	return (ans);

}

int		main(int q, char **argv)
{
	int i;
	i = 0;
	printf("%d\n", q);
	argv = ft_split(argv[1]);
	while (argv[i])
	{
		printf("%s\n", argv[i]);
		i++;
	}
}
