/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:55:15 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/12 22:21:35 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 ** ft_putstr_pf - Prints a string of characters 
 **function depends on the string that receive by parameter
 **
 **@str:   The string to prints
 **@lcount:The amount of printing characters
 **
 **return the count value or \"(null)\" if str is null
 ** 
 */

int	ft_putstr_pf(char *str)
{
	int	count;

	if (!str)
		str = "(null)";
	count = 0;
	while (str[count])
		count++;
	write(1, str, count);
	return (count);
}
