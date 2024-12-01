/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 23:35:55 by yslami            #+#    #+#             */
/*   Updated: 2024/11/18 11:40:46 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_BONUS_H
# define FT_PRINTF_BONUS_H

# include "../Libft/libft.h"
# include <stdarg.h>

# define HEXALOW "0123456789abcdef"
# define HEXAUP "0123456789ABCDEF"

typedef struct s_format
{
	int		len;
	int		neg;
	char	specifier;
	int		minus;
	int		plus;
	int		width;
	int		precision;
	int		neg_prec;
	int		zero;
	int		dot;
	int		space;
	int		sharp;
}	t_format;

t_format	ft_newformat(void);
void		ft_parse_bonus(const char *str, va_list list, t_format *p);
int			ft_isflag(int c);
int			ft_isspecific(int c);
int			ft_isflag_type(int c);
void		ft_flags_minus(t_format *p);
void		ft_reset_format(t_format *p);
int			ft_type(t_format p);
int			ft_print_c_prc(va_list list, t_format p);
int			ft_print_s(va_list list, t_format p);
int			ft_print_di(int nbr, t_format p);
int			ft_print_u(unsigned nbr, t_format p);
int			ft_print_hex(unsigned int n, t_format p);
int			ft_print_p(void *ptr, t_format p);

int			ft_printf(const char *format, ...);

#endif
