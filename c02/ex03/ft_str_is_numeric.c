/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:41:09 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/21 10:42:24 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*int	main()
{
	printf("%d", ft_str_is_numeric("123456"));
	printf("\n%d", ft_str_is_numeric("78910j1112"));
	printf("\n%d", ft_str_is_numeric("-_jsdsdc67sdlkc,"));
}*/
