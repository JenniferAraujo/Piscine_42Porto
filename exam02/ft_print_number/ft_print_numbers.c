/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jede-ara <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 21:22:49 by jede-ara          #+#    #+#             */
/*   Updated: 2022/07/28 21:22:51 by jede-ara         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_numbers(void)
{
    char nb;

    nb = '0';
    while (nb <= '9')
    {
        write(1, &nb, 1);
        nb++;
    }
}

int		main(void)
{
	ft_print_numbers();
}
