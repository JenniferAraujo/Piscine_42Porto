/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 20:35:41 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/23 20:36:29 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i1;
	unsigned int	i2;

	i1 = 0;
	i2 = 0;
	while (dest[i1] != '\0')
		i1++;
	while (src[i2] != '\0' && i2 < nb)
	{
		dest[i1] = src[i2];
		i1++;
		i2++;
	}
	dest[i1] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int		main(void)
{
	char	dest[50] = "jenny";
	char	*src;

	unsigned nb = 3;
	src = " araujo";
	printf("%s.\n", ft_strncat(dest, src, nb));
}*/
