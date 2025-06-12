/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <sgomez-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 22:39:50 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/12 22:18:12 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(unsigned long n, int base_len)
{
	int	count;

	count = 1;
	while (n >= (unsigned long)base_len)
	{
		n /= base_len;
		count++;
	}
	return (count);
}
