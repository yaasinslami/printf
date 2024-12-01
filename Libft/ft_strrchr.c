/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 19:21:47 by yslami            #+#    #+#             */
/*   Updated: 2024/10/25 13:39:25 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strrchr - locate character in string
 * 
 * @s: the inputed string
 * @c: charachter to be searched (casted to un_int)
 * 
 * Description: ft_strrchr is identical to strchr().
 * 				Except it locates the last occurence of c.
 * 
 * Return: returns a pointer to the located character if exist,
 * 			otherwise return (NULL);
*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	c = (unsigned char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
		{
			return ((char *)s + i);
		}
		i--;
	}
	return (NULL);
}

/*
int main()
{
	const char s[] = "Hello, World";
	int c = 'l';

	ft_putendl_fd(ft_strrchr(s, c), 1);
	return (0);
}
*/