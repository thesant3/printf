/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 20:52:11 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/17 00:36:37 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 ** ft_puthex-Transform and prints a integer to a hexadecimal number. 
 ** The specifer reciven by parameter determines the lower or upper case.
 ** @nbr: Number to transform in hexadecimal base.
 ** @cs: specifer thats determines upper or lower case.
 ** Returns the amount of characters printing of the hex number.
 ** In case of fail returns 0.
 */
#include "ft_printf.h"

int	ft_puthex_pf(long long nbr, char cs)
{
	char	*lower;
	char	*upper;
	char	*hex;
	int		count;

	lower = "0123456789abcdef";
	upper = "0123456789ABCDEF";
	count = 0;
	if (cs == 'X')
		hex = ft_utoa(nbr, upper);
	else
		hex = ft_utoa(nbr, lower);
	if (!hex)
		return (0);
	while (hex[count])
		count++;
	write(1, hex, count);
	free(hex);
	return (count);
}
