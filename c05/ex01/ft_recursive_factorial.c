/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:54:56 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/26 11:54:58 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	resultado;

	resultado = 1;
	if (nb > 0)
	{
		resultado = nb * ft_recursive_factorial (nb - 1);
	}
	if (nb < 0)
	{
		return (0);
	}
	return (resultado);
}

int	main(void)
{
	int	ft_recursive_factorial(int nb);
	int	numero, resultado;
	
	numero = 0;
	resultado = ft_recursive_factorial (numero);
	
	printf("O fatorial e %i", resultado);
	return (0);	
}
