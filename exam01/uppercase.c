/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uppercase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:43:43 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/22 15:47:02 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	char	a;
	char	b;

	a = 'a';
	b = 'B';
	while (b <= 'Z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a += 2;
		b += 2;
	}
}

/*int	main(void)
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVxZ", 26);
	return(0);
}*/

