/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <sgomez-m@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/11 22:33:44 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/17 00:22:07 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_utoa(unsigned long n, const char *base)
{
	char	*str;
	int		count;
	int		base_len;

	base_len = (int)ft_strlen(base);
	count = ft_nbrlen(n, base_len);
	str = malloc((count + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[count] = '\0';
	while (count--)
	{
		str[count] = base[n % base_len];
		n /= base_len;
	}
	return (str);
}
