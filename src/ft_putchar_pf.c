/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_pf.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:53:06 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/12 22:19:29 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 **ft_putchar - Prints a character receive by parameter
 ** 
 **@c: The printting character
 **
 */

#include "ft_printf.h"

int	ft_putchar_pf(char c)
{
	return (write(1, &c, 1));
}
