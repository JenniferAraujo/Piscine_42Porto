/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 11:10:17 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/19 11:22:40 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*int	main(void)
{
	int	a = 20;
	int	b = 5;
	int	*div = &a;
	int	*mod = &b;

	printf("Antes da funcao A:%d, e B:%d.\n", a, b);
	ft_div_mod(a, b, div, mod);
	printf("Realizando a divisao, Div: %d, e o modulo, Mod:%d.", *div, *mod);
}*/
