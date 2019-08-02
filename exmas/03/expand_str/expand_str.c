/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   expand_str.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 22:03:16 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/30 23:40:57 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	three_spaces(char *str)
{
	int i;
	char c;

	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n') && str != '\0')
		i++;
	while (str[i] != '\0')
	{
	//	printf("este es str[i]=%c y este es i=%d\n", str[i], i);
		while ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			i++;
	//	printf("este es if str[i]=%d y este es i=%d\n", str[i], i);
		if (((str[i] >= 9 && str[i] <= 13) || str[i] == ' ') && ((str[i + 1] < 9 || str[i + 1] > 13) && str[i + 1] != ' '))
		{
			write(1, "   ", 3);
			i++;
		}
		if (str[i] != '\0')
		{
			c = str[i];
			write(1, &c, 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

int		main(int q, char **argv)
{
	if (q == 2 && argv[1])
		three_spaces(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}

