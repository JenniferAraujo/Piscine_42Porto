/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 12:51:31 by jede-ara          #+#    #+#             */
/*   Updated: 2022/08/04 12:51:33 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(void)
{
	char	a;
	char	b;
	
	a = 'a';
	b = 'B';
	while(b <= 'Z')
	{
		write(1, &a, 1);
		write(1, &b, 1);
		a += 2;
		b += 2;
	}
	write(1, "\n", 1);
	return (0);
}
