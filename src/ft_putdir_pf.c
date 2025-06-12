/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putdir_pf.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <sgomez-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/12 04:03:49 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/12 04:04:08 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib_printf.h"

int	ft_putdir_pf(void *pointer)
{
	uintptr_t	ptr;
	char		*str;
	int			count;

	ptr = (uintptr_t) pointer;
	count = 0;
	if (!ptr)
		return (write(1, "(nil)", 5));
	str = ft_utoa(ptr, "0123456789abcdef");
	if (!str)
		return (0);
	write(1, "0x", 2);
	while (str[count])
		count++;
	write(1, str, count);
	count += 2;
	free(str);
	return (count);
}
