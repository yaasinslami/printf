/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 23:02:17 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 16:39:16 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_maj - Checks if a character is an uppercase letter.
 *
 * @c: Character to check (ASCII representation).
 * 
 * Return: 1 if @c is an uppercase letter, 0 otherwise.
*/

static int	ft_maj(int c)
{
	return (c >= 'A' && c <= 'Z');
}

/**
 * ft_min - Checks if a character is a lowercase letter.
 *
 * @c: Character to check (ASCII representation).
 * 
 * Return: 1 if @c is a lowercase letter, 0 otherwise.
*/

static int	ft_min(int c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * ft_isalpha - Determines if a character is an alphabetic
 * letter (either uppercase or lowercase).
 *
 * @c: Character to check (ASCII representation).
 * 
 * Return: 1 if @c is an alphabetic letter, 0 otherwise.
*/

int	ft_isalpha(int c)
{
	return (ft_maj(c) || ft_min(c));
}

/*
int main()
{
	ft_putnbr_fd(ft_isalpha('z'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('G'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('7'), 1);
	ft_putchar_fd('\n', 1);
	ft_putnbr_fd(ft_isalpha('\t'), 1);
	ft_putchar_fd('\n', 1);
}
*/