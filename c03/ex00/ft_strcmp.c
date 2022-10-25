/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 15:21:54 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/23 16:32:18 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int	main()
{
	printf("%d", ft_strcmp("coxinha", "coxinha"));
	printf("\n%d", ft_strcmp("wilson", "abacate"));
	printf("\n%d", ft_strcmp("laranja", "aa"));
	printf("\n%d", ft_strcmp("banana", "uva"));
}*/
