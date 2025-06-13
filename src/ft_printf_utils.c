/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:39:23 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/14 00:30:53 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

/*
 **ft_handle_format - Parses a format specifier and dispatches the correct
 **printing function depending on the parameter's data type.
 **
 **@c:	 The format specifier
 **@args: The variadic parameters 
 ** 
 */

int	ft_handle_format(char *c, va_list args)
{
	if (*c == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	if (*c == '%')
		return (ft_putpercent_pf());
	else if (*c == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else if (*c == 'd' || *c == 'i')
		return (ft_putdecimal_pf(va_arg(args, int)));
	else if (*c == 'u')
		return (ft_putdecimal_pf(va_arg(args, unsigned int)));
	else if (*c == 'p')
		return (ft_putdir_pf(va_arg(args, void *)));
	else if (*c == 'x' || *c == 'X')
		return (ft_puthex_pf(va_arg(args, unsigned long), *c));
	else
		return (0);
}
