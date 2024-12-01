/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:00:15 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 15:58:56 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_bzero - Fills memory with zero bytes
 * @s: Memory area
 * @n: Number of bytes
*/

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n)
	{
		*ptr++ = 0;
		--n;
	}
}

/*
int main(void)
{
    char str[20] = "Hello World";
    
    ft_putendl_fd(str, 1);
    ft_bzero(str, 6);
	ft_putendl_fd(str, 1);
    ft_putendl_fd(str + 6, 1);
    return (0);
}
*/