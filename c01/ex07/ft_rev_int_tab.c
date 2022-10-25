/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:46:42 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/19 12:48:34 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	index;
	int	c;

	index = 0;
	c = 0;
	while (index < (size))
	{
		c = tab[index];
		tab[index] = tab[size - 1 - index];
		tab[size - 1 - index] = c;
		index++;
	}
}

#include <stdio.h>
int	main()
{
	int tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	ft_rev_int_tab(&tab[0], 10);
	for(int i =0; i < 10; i++)
	{
		printf("%d", tab[i]);
	}
}
