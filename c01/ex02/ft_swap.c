/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 10:52:35 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/19 10:58:46 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

int	main(void)
{
	int	je;
	int	ni;
	
	je = 21;
	ni = 44;
	
	printf("Antes da funcao je tem : %d, e ni tem : %d\n", je, ni);
	ft_swap(&je, &ni);
	printf("Depois da funcao je tem : %d, e ni tem: %d\n", je, ni);
}
