/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib_printf.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:14:23 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/06 20:14:02 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_PRINTF_H
# define LIB_PRINTF_H

#include <stdarg.h>

int	ft_printf(char const *, ...);
void	ft_parfor_dps(char c, *len);
void	ft_putchar_pf(char c, *len);
void	ft_puthex_pf(va_args(args, int), &len, char cs);
void	ft_putnbr_pf(int n, int *len);
void	ft_putstr_pf(char *str, *len);
#endif
