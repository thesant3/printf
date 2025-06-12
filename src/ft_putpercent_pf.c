/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putpercent_pf.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <sgomez-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 02:27:29 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/12 22:21:12 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
/**
 **Prints the percent symbol
 */
int	ft_putpercent_pf(void)
{
	return (write(1, "%", 1));
}
