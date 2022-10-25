/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 12:40:47 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/22 12:40:50 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	je;
	int	ni;
	
	je = 26;
	ni = 40;
	
	printf("Antes do surto je tinha : %d e ni tinha : %d\n", je, ni);
	ft_swap(&je, &ni);
	printf(" Depois do surto je tem : %d e ni tem : %d", je, ni);
}
