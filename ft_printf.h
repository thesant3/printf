/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgomez-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/02 20:14:23 by sgomez-m          #+#    #+#             */
/*   Updated: 2025/06/14 00:28:02 by sgomez-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>

int	ft_printf(char const *str, ...);
int	ft_putchar_pf(char c);
int	ft_putstr_pf(char *str);
int	ft_handle_format(char *c, va_list args);
int	ft_putpercent_pf(void);
int	ft_putdecimal_pf(long d);
int	ft_nbrlen(unsigned long n, int base_len);
int	ft_putdir_pf(void *pointer);
int	ft_puthex_pf(unsigned long nbr, char cs);
char	*ft_itoa(long n);
char	*ft_utoa(unsigned long n, const char *base);
char	*ft_strdup(const char *s);
void	*ft_calloc(size_t nmemb, size_t size);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dest, char *src, size_t size);

#endif
