/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:19:13 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/29 15:19:17 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_rev_print (char *str)
{
	int	i;
	
	i = ft_strlen(str);
	i--;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	return(str);
}

int	main(int argc, char **argv)
{
	int	i = 0;
	
	if (argc == 2)
		ft_rev_print(argv[1]);
}
