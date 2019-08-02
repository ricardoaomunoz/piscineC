/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   epur_str.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:18:10 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/30 21:49:16 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_one_space(char *str)
{
	int i;
	char c;

	i = 0;
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\r' || str[i] == '\f' || str[i] == '\n') && str != '\0')
		i++;
	while (str[i] != '\0')
	{
		while ((str[i] == ' ' || str[i] == '\t') && (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0'))
			i++;
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
	if (q == 2)
	{
		print_one_space(argv[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
