/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:52:22 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 15:52:08 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isalnum - function to determine if a charcater is a digit or alphabet
 * 
 * @c: the inputed character
 * 
 * Return: return 1 if @c is digit || alphabte otherwise return 0
*/

int	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}

/*
int main()
{
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('A'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('F'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('1'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('5'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('x'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalnum('\n'), 1);
	ft_putchar_fd('\n', 1);
}
*/