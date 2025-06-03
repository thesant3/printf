/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:58:05 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/04 01:16:01 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	ft_printf(char const *str, ...)
{
	int	i;
	int	*len;
	va_list	args;

	i = 0;
	len = 0;
	va_start(args, str);
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c' || str[i + 1] == '%')
				ft_putchar_pf(va_arg(args, char), &len);
			else if (str[i + 1] == 's')
				ft_putstr_pf(va_arg(args, *char), &len);
			else if (str[i + 1] == 'p')
				ft_putdir_pf(args, );
			else if (str[i + 1] == 'd' || str[i + 1] == 'i')
				ft_putnbr_pf(va_arg(args, int), &len);
			else if (str[i + 1] == 'u')
				ft_putnbr__pf((); //reutilizar la función ft_putnbr solo casteando a unsigned int
			else if (str[i + 1] == 'x' || str[i + 1] == 'X')
				ft_puthex_pf(va_args(args, int), &len);
		}
		else
			ft_putchar_pf(str[i], &len);
		i++;
	}
	return (len);
}
