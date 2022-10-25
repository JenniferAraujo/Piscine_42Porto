/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 12:34:56 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/19 12:39:35 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

/*#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	str[] = "Jennifer";
	int	count = ft_strlen(str);

	printf("%d\n", count);
}*/
