/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:50:39 by jede-ara          #+#    #+#             */
/*   Updated: 2022/08/04 16:50:40 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
		i++;
	return (i);
}

char	*ft_rev_print(char *str)
{
	int	i;
	
	i = ft_strlen(str) - 1;
	while(i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return(str);
}



int	main(int ac, char **av)
{
	int	i;
	
	if(ac == 2)
		ft_rev_print(av[1]);
	else
		write(1, "\n", 1);
}
