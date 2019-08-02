/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/31 14:25:14 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/31 16:53:25 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str)
{
	int ans;
	int i;

	ans = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i] != '\0')
	{
		ans = (ans * 10) + (str[i] - '0');
		i++;
	}
	return (ans);
}

void	print_base16(int num)
{
	char c;
	if (num < 16)
	{
		if (num < 10)
		{
			c = num + '0';
			write(1, &c, 1);
		}
		else
		{
			c = num + 87;
			write(1, &c, 1);
		}
	}
	else
	{
		print_base16(num / 16);
		if ((num % 16) < 10)
		{
			c = (num % 16) + '0';
			write(1, &c, 1);
		}
		else
		{
			c = (num % 16) + 87;
			write(1, &c, 1);
		}

	}


}
int		main(int q, char **argv)
{
	if (q == 2)
	{
		print_base16(ft_atoi(argv[1]));
	}
	else
		write(1, "\n", 1);
	return (0);
}
