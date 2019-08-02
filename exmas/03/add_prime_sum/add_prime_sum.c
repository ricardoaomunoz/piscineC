/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rosorio <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 18:18:16 by rosorio           #+#    #+#             */
/*   Updated: 2019/07/30 18:59:14 by rosorio          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		is_prime(int num)
{
	int i;
	int count;

	i = 1;
	count = 0;
	while (i <= num)
	{
		if (num % i == 0)
			count++;
		i++;
	}
	if (count == 2)
		return(1);
	else
		return(0);
}

int		ft_atoi(char *num)
{
	int i;
	int neg;
	int ans;

	i = 0;
	neg = 1;
	ans = 0;
	while (num[i] == ' ' || num[i] == '\t' || num[i] == '\v' || num[i] == '\n' || num[i] == '\f' || num[i] == '\r')
		i++;
	if (num[i] == '-' || num[i] == '+')
	{
		if (num[i] == '-')
			neg *= -1;
		i++;
	}
	while (num[i] >= '0' && num[i] <= '9' && num[i] != '\0')
	{
		ans = (ans * 10) + (num[i] - '0');
		i++;
	}
	return (ans);

}

void	print_ans(int num)
{
	char c;

	if (num < 10)
	{
		c = num + '0';
		write(1, &c, 1);
	}
	else
	{
		print_ans(num/10);
		c = (num % 10) + '0';
		write(1, &c, 1);
	}
}
int		main(int q, char **argv)
{
	int num;
	int sum;
	int i;

	i = 1;
	sum = 0;
	if (q == 2)
	{
		num = ft_atoi(argv[1]);
		printf("num from atoi %d\n", num);
		if (num > 0)
		{
			while (i <= num)
			{
				if(is_prime(i))
					sum = sum + i;
				i++;
			}
			printf("suma de primos %d\n", sum);
			print_ans(sum);	
		}
		else
			write(1, "0\n", 2);

	}
	else
		write(1, "0\n", 2);
	return (0);

}
