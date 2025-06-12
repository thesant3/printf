/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 19:58:05 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/12 23:43:00 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	char	*ptr;
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	ptr = (char *)str;
	while (*ptr)
	{
		if (*ptr == '%' && (ptr + 1))
			count += ft_handle_format((++ptr), args);
		else
		{
			count += write(1, ptr, 1);
		}
		ptr++;
	}
	va_end(args);
	return (count);
}
