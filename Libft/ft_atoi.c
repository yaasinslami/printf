/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:32:57 by yslami            #+#    #+#             */
/*   Updated: 2024/10/31 20:54:03 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_handle_overflow(unsigned long nbr, int ndigit, int sign)
{
	if (sign == 1)
		if ((nbr >= 922337203685477580 && ndigit > 7)
			|| nbr > 922337203685477580)
			return (-1);
	if (sign == -1)
		if ((nbr >= 922337203685477580 && ndigit > 8)
			|| nbr > 922337203685477580)
			return (0);
	return (1);
}

/**
 * ft_atoi - Converts string to integer
 * @str: String to convert
 * Return: Converted integer
*/

int	ft_atoi(const char *str)
{
	int				i;
	unsigned long	result;
	int				sign;
	int				overflow;

	i = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || str[i] == 32))
		i++;
	sign = 1;
	if (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	result = 0;
	while (str[i] && (str[i] >= '0' && str[i] <= '9'))
	{
		overflow = ft_handle_overflow(result, (str[i] - '0'), sign);
		if (overflow != 1)
			return (overflow);
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * sign);
}

/*
int main()
{
	char str1[] = "  +2147484364";

	ft_putnbr_fd(ft_atoi(str1), 1);
	ft_putchar_fd('\n', 1);

	return (0);
}
*/
