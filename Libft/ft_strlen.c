/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:13:41 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 16:58:46 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strlen - Calculates the length of a string.
 *
 * @str: The string whose length is to be calculated.
 * 
 * Return: The length of the string @str, excluding the
 * null terminator.
*/

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

/*
int main(void)
{
    char str[] = "Hello";
    int len = ft_strlen(str);
    
    ft_putnbr_fd(len, 1);
    return (0);
}
*/