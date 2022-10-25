/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 12:44:06 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/26 12:44:08 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0 || nb >= 13)
		return (0);
	while (nb > 0)
	{
		result = result * nb;
		nb --;
	}
	return (result);
}

#include <stdio.h>

int	main(void)
{
	printf("O fatorial e %d", ft_iterative_factorial(5));
	return (0);
}
