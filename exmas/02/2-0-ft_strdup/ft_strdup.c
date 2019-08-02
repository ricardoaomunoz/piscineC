/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/24 20:04:35 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/24 20:25:10 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*copystr;
	int 	len;
	int i;

	len = 0;
	i = 0;
	while (src[i] != '\0')
		i++;
	if (!(copystr = (char*)malloc(sizeof(char) * (i + 1)))
			return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		copystr[i] = src[i];
		i++;
	}
	copystr[i] = '\0';
	return (copystr);
}
