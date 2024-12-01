/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:12:34 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 13:29:28 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_memcmp - compare byte string
 * 
 * @s1: the first argument to be compared
 * @s2: the second argument to be compared
 * 
 * Description: ft_memcmp() compares byte string s1 against byte string s2.
 * 				Both strings are assumed to be n bytes long.
 * 
 * Return: returns 0 if the two strings are equal, otherwise returns *s1 - *s2
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}

/*
int main()
{
	char	s1[] = "Hello";
	char	s2[] = "Helol";

	ft_putnbr_fd(ft_memcmp(s1, s2, 4), 1);
}
*/