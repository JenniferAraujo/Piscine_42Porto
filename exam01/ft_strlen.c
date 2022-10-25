/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 10:24:11 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/22 10:24:13 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Jennifer";
	int	count = ft_strlen(str);
	
	printf("%d\n", count);
}
