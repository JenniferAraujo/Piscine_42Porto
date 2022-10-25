/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 16:21:31 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/17 18:33:46 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	write_num(int num)
{
	char	a;
	char	b;

	if (num < 10)
	{
		b = num + '0';
		a = '0';
	}
	else
	{
		b = (num % 10) + '0';
		a = ((num / 10) % 10) + '0';
	}
	write(1, &a, 1);
	write(1, &b, 1);
}

void	write_chars(int a, int b)
{
	write_num(a);
	write(1, " ", 1);
	write_num(b);
	if (! (a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a < 99)
	{
		b = a + 1;
		while (b < 100)
		{
			write_chars(a, b);
			b++;
		}
		a++;
	}
}
