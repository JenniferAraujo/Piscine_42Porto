/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:04:41 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/19 12:06:50 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	if (*b != 0)
	{
		div = (*a) / (*b);
		mod = (*a) % (*b);
		*a = div;
		*b = mod;
	}
}
/*#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int i = 8;
	int j = 4;
	int *a = &i;
	int *b = &j;

	printf("%d/", i);
	printf("%d\n",j);

	ft_ultimate_div_mod(a, b);

	printf("div (*a) = %d\n",*a);
	printf("mod (*b) = %d",*b);
}*/
