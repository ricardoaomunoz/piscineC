/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 23:03:43 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/24 23:47:54 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int q, char **argv)
{
	int len;

	len = 0;
	if(q == 2)
	{
		while (argv[1][len] != '\0')
			len++;
		len -= 1;
		while ((argv[1][len] == ' ' || argv[1][len] == '\t') && len != 0)
			len--;
		while (argv[1][len] != ' ' && argv[1][len] != '\t' && len != 0)
			len--;
		len += 1;
		while (argv[1][len] != ' ' && argv[1][len] != '\t' && argv[1][len] != '\0')
		{
			write (1, &argv[1][len], 1);
			len++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
