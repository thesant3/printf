/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdecimal_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <sgomez-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 00:19:25 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/12 22:19:53 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putdecimal_pf(long d)
{
	char	*str_nbr;
	int		count;

	str_nbr = ft_itoa(d);
	if (!str_nbr)
		return (0);
	count = 0;
	while (str_nbr[count])
		count++;
	write(1, str_nbr, count);
	free(str_nbr);
	return (count);
}
