/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 00:02:11 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/04 00:44:38 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf"

void	ft_putnbr_pf(int n, int *len)
{
	long	nbr;
	int	sing;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, '-', 1);
	}
	if (nbr >= 10 )
	{
		ft_putnbr((nbr / 10), *len++);
	}
	ft_putchar_pf(((nbr % 10) + '0'), *len);
}
