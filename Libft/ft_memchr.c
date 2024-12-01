/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:23:50 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 13:29:19 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memchr - locate byte in byte string
 * 
 * @s: the inputed string which will be search in
 * @c: the searched charachter in @s within @n bytes
 * @n: number of bytes to search for @c
 * 
 * Description: ft_memchr() function locates the first occurence of c
 * 				(convered to an unsigned char) in string s.
 * 
 * Return: returns a pointer to the byte located, otherwise return NULL.
*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n && *ptr != (unsigned char)c)
	{
		ptr++;
		n--;
	}
	if (n)
	{
		return ((void *)ptr);
	}
	return (NULL);
}

/*
int	main()
{
	char	s[] = "Hello, World";
	char	c = 'o';

	ft_putendl_fd(ft_memchr(s, c, ft_strlen(s)), 1);
	return (0);
}
*/