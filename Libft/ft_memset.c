/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 09:28:48 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 13:29:36 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 *  ft_memset - fill a byte string with a byte value
 * 
 * @s: the target buffer which will be filled by @c, @n time
 * @c: charachter to replace each case of the @s memory
 * @n: number of bytes to fill @s with @c
 * 
 * Description: writes len bytes of value c (casted to unsigned char) to @s
 * 
 * Return: return @s
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

/*
int  main()
{
	char	s[] = "Hello World!";
	int	c = 'u';

	ft_putendl_fd(ft_memset(s, c, ft_strlen(s)), 1);
	return (0);
}
*/