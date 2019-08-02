/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:59:13 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/26 13:31:14 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	capitalize(char **argv)
{
	int i;
	int j;

	i = 1;
	while (argv[i] != '\0')
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (argv[i][j] > 64 && argv[i][j] < 91)
				argv[i][j] += 32;
			if (argv[i][j] > 96 && argv[i][j] < 123 && (j == 0 || argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t'))
				argv[i][j] -= 32;
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int		main(int q, char **argv)
{
	if (q > 1)
	{
		capitalize(argv);
	}
	else
		write(1, "\n", 1);
	return (0);
}
