/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 23:04:03 by jede-ara          #+#    #+#             */
/*   Updated: 2022/08/04 23:04:04 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_atoi(int const *str)
{
	int	i;
	int	negativo;
	int	resultado;
	
	i = 0;
	negativo = 1;
	resultado = 0;
	
	while (str[i] <= 32)
		i++;
	if (str[i] == '-')
	{
		negativo = - 1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while(str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		resultado *= 10;
		resultado += str[i] - '0';
			i++;
	}
	return (resultado * negativo);
}
