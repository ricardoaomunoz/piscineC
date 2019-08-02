/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:52:17 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/24 22:44:13 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		withoutdobles(char *sr2, char c, int position)
{
	int 	i;

	i = 0;
	while (sr2[i] != '\0' && i < position)
	{
		if (sr2[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int		main(int q, char **argv)
{
	int doubles;
	int i;
	int j;

	i = 0;
	j = 0;
	if (q != 3)
	{
		write(1, "\n", 1);
		return (0);
	}

	while (argv[1][i] != '\0')
	{
		doubles = withoutdobles(argv[1], argv[1][i], i);
		if (doubles)
		{
			j = 0;
			while (argv[2][j] != argv[1][i] && argv[2][j] != '\0')
			{
				j++;
			}
			if (argv[2][j] == argv[1][i])
				write(1, &argv[2][j], 1);
			i++;
		}
		else
			i++;
	}
	write(1, "\n", 1);
	return (0);
}
