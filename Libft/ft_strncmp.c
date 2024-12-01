/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:16:16 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 17:46:08 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strncmp - Compares up to n characters of two strings.
 *
 * @s1: The first string to compare.
 * @s2: The second string to compare.
 * @n: The maximum number of characters to compare.
 * 
 * Return: An integer less than, equal to, or greater than zero,
 * indicating whether @s1 is less than, equal to, or greater than @s2.
 * If n is zero, the function returns 0.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		++ptr1;
		++ptr2;
		--n;
	}
	if (n)
	{
		return (*ptr1 - *ptr2);
	}
	else
		return (0);
}

/*
int	main(void)
{
    int result;
    
    result = ft_strncmp("Hello", "Hell", 5);
    ft_putnbr_fd(result, 1);
    ft_putchar_fd('\n', 1);
    return (0);
}
*/