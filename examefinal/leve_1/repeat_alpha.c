/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:11:36 by jede-ara          #+#    #+#             */
/*   Updated: 2022/08/04 15:11:39 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	count;
	
	i = 0;
	count = 0;
	if (ac == 2)
	{
		while(av[1][i]!= '\0')
		{
			if (av[1][i] >= 'A' && av[1][i] <= 'Z')
				count = av[1][i] - 64;
			else if (av[1][i] >= 'a' && av[1][i] <= 'z')
				count = av[1][i] - 96;
			while(count)
			{
				write(1, &av[1][i], 1);
				count --;
			}
			count = 1;
			i++;
		}
	}
	write(1, "\n", 1);
	return (0); 
}
