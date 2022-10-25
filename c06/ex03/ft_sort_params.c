/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 18:42:35 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/30 18:42:38 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

void	main(int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i < 0)
	{
		ft_putstr(argv[i]);
		ft_putstr('\n');
		i--;
	}
	return (0);
}
