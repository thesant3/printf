/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:58:05 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/06 20:13:57 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	ft_printf(char const *str, ...)
{
	int	*count;
	char	*ptr;
	va_list	args;

	va_start(args, str);
	count = 0;
	ptr = str;
	while (*ptr)
	{
		if (*ptr == '%' && (ptr + 1))
			count += ft_handle_format(ptr++);
		else
		{
			count += write(1, ptr, 1);
			ptr++;
		}
	}
	va_end(args);
	return (count);
}
