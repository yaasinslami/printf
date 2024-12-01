/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_funcs.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:20:38 by yslami            #+#    #+#             */
/*   Updated: 2024/11/18 17:07:01 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int	ft_putstr(char *s)
{
	int	len;

	if (!s)
		return (write(1, "(null)", 6));
	len = ft_strlen(s);
	return (write(1, s, len));
}

int	ft_putnb(int n)
{
	char	*str;
	int		count;

	count = 0;
	str = ft_itoa(n);
	if (!str)
		return (0);
	count += ft_putstr(str);
	free(str);
	return (count);
}

int	ft_put_unsigned(unsigned int n)
{
	char	*str;
	int		len;

	len = 0;
	str = ft_utoa(n);
	if (!str)
		return (0);
	len += ft_putstr(str);
	free(str);
	return (len);
}
