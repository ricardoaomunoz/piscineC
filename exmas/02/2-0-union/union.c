/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 23:51:41 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/25 13:38:32 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		compare(char *str, char c, int index)
{
	int i;

	i = 0;
	while (str[i] != '\0' && i < index )
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);

}
int		main(int q, char **argv)
{
	int i;
	int j;
	int put;

	i = 0;
	j = 0;

	if (q == 3)
	{
		while (argv[1][i] != '\0')
		{
			put = compare(argv[1], argv[1][i], i);
			if (put)
				write(1, &argv[1][i], 1);
			i++;
		}
		while (argv[2][j] != '\0')
		{
			if (compare(argv[1], argv[2][j], i) && compare(argv[2], argv[2][j], j))
				write(1, &argv[2][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
