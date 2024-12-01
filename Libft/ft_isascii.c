/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 23:23:14 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 15:50:33 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_isascii - function to determine if a character belong to the ascii table
 * 
 * @c: the inputed character
 * 
 * Return: return 1 if @c is in ascii range, otherwise return 0
*/

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/*
int	main()
{
	ft_putnbr_fd(ft_isascii(50), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(100), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(190), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isascii(200), 1);
	ft_putchar_fd('\n', 1);
}
*/