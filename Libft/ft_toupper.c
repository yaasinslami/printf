/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:47:46 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 17:51:32 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_toupper - Converts a lowercase letter to its uppercase
 * equivalent.
 *
 * @c: The character to convert (ASCII representation).
 * 
 * Return: The uppercase equivalent of @c if it is a lowercase
 * letter; otherwise, returns @c unchanged.
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (c - 32);
	}
	return (c);
}

/*
int main()
{
	char str[] = "Hello";
    int i;
    
    i = 0;
    while (str[i])
    {
        str[i] = ft_toupper(str[i]);
        i++;
    }
    ft_putendl_fd(str, 1);
	return (0);
}
*/