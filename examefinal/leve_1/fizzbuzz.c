/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 13:34:53 by jede-ara          #+#    #+#             */
/*   Updated: 2022/08/04 13:34:54 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_fizzbuzz(int number)
{
	if (number > 9)
		ft_fizzbuzz(number / 10);
		write(1, &"0123456789"[number % 10], 1);
}

int	main(void)
{
	int	number;
	
	number = 0;
	while (number <= 100)
	{
	if (number % 3 == 0 && number % 5 == 0)
		write(1, "fizzbuzz", 8);
	else if (number % 3 == 0)
		write(1, "fizz", 4);
	else if (number % 5 == 0)
		write(1, "buzz", 4);
	else
		ft_fizzbuzz(number);
		write(1, "\n", 1);
		number ++;
	}
}
