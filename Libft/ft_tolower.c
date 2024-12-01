/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:52:23 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 17:51:21 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_tolower - Converts an uppercase letter to its lowercase
 * equivalent.
 *
 * @c: The character to convert (ASCII representation).
 * 
 * Return: The lowercase equivalent of @c if it is an uppercase
 * letter; otherwise, returns @c unchanged.
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

/*
int main(void)
{
	char str[] = "Hello";
	int	i;

    i = 0;
    while (str[i])
    {
        str[i] = ft_tolower(str[i]);
        i++;
    }
    ft_putendl_fd(str, 1);
    return (0);
}
*/