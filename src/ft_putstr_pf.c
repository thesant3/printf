/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:55:15 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/06 20:13:39 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf"

/*
 * ft_putstr_pf - Prints a string of characters 
 * function depends on the string that receive by parameter
 *
 * @str:   The string to prints
 * @lcount:
 * 
 */

int	ft_putstr_pf(char *str)
{
	int	count;

	if (!str)
		str = "(null)";
	i = 0;
	count = 0;
	while (str[count])
	{
		write(1, str[count], 1);
		count++;
	}
	return (count);
}
