/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 23:18:26 by yslami            #+#    #+#             */
/*   Updated: 2024/11/18 16:25:43 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "../Libft/libft.h"
# include <stdarg.h>

int	ft_printf(const char *format, ...);
int	ft_putstr(char *s);
int	ft_putnb(int n);
int	ft_put_unsigned(unsigned int n);
int	ft_put_hexadec(unsigned int n, const char format);
int	ft_put_pointer(void *ptr);

#endif
