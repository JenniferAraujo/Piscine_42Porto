/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 15:03:48 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/31 15:03:51 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = malloc(sizeof(int) * (max - min));
	if (tab == NULL)
		return (-1);
	else
	{
		i = -1;
		while (++i < max - min)
			tab[i] = min + i;
		*range = tab;
		return (i);
	}
}
/*int	main(void)
{
	int	*range;
	int	i;

	i = 0;
	printf("return : %d\n", ft_ultimate_range(&range, 10, 25));
	while (i < 15)
	{
	printf("%d\n", range[i]);
		i++;
	}
	return (0);
}*/
