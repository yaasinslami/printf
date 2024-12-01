/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:45:50 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 15:41:18 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isdigit - determine if a character is a digit or not
 * 
 * @c: the input character
 * 
 * Return: return 1 if @c is a digit, otherwise return 0
*/

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/*
int main()
{
	ft_putnbr_fd(ft_isdigit('0'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('a'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('8'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isdigit('\t'), 1);
	ft_putchar_fd('\n', 1);
}
*/