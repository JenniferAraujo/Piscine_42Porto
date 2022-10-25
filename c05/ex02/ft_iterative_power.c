/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 16:35:13 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/26 16:40:25 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		x = x * nb;
		power --;
	}
	return (x);
}

/*int	main(void)
{
	int	nb; 
	int	power;

	nb = 2;
	power = 3;
	printf("%d\n", ft_iterative_power(nb, power));
}*/
