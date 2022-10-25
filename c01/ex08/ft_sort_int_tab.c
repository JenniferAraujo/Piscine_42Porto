/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:48:22 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/20 10:50:39 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h> 

void	ft_sort_int_tab(int *tab, int size)
{
	int	swap;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			swap = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = swap;
			count = 0;
		}
		else
			count++;
	}
}

/*int	main(void)
{
	int	tab[10] = {50, 7, 5, 3, 4, 8, 14, 20, 24, 12};
	ft_sort_int_tab(tab, 10);
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", tab[i]);
	}
}*/
