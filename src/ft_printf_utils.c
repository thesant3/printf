/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 23:39:23 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/06 20:13:45 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

/*
 * ft_handle_format - Parses a format specifier and dispatches the correct printing 
 * function depending on the parameter's data type.
 *
 * @c:	 The format specifier
 * @len: The amount of characters to print
 * 
 */

int	ft_handle_format(char *c)
{
	if (*c == 'c')
		return ft_putchar_pf(va_arg(args, int));
	if (*c == '%')
		return (write(1, "%", 1));
	else if (*c == 's')
		return ft_putstr_pf(va_arg(args, *char));
	else if (*c == 'p')
		return ft_putdir_pf(va_arg(args, *void));
	else if (*c == 'd' || *c == 'i')
		return ft_putnbr_pf(va_arg(args, int));
	else if (*c == 'u')
		return ft_putnbr__pf(args, unsigned int);
	else if (*c == 'x' || *c == 'X')
		return ft_puthex_pf(va_args(args, unsigned int, specifier));
	else
		return (0);	
}
