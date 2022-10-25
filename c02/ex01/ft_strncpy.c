/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 20:32:04 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/20 20:32:10 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*int	main()
{
	char src[] = "Help";
	char dest[] =  "Socorro";
	char dest1[] = "Ajuda?";
	
	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", strncpy(dest1, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 4));
	printf("\n%s", strncpy(dest1, src, 2));
	printf("\n%s", ft_strncpy(dest, src, 3));
	printf("\n%s", strncpy(dest1, src, 3));
}*/
