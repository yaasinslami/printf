/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yslami <yslami@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 19:00:48 by yslami            #+#    #+#             */
/*   Updated: 2024/10/27 15:09:47 by yslami           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * ft_strnstr - locate a substring in a string
 *
 * @big: first string that will be searched in
 * @little: second string that will be searched for
 * @len: n
 *
 * Return: return a pointer to the first character of the first
 * 		occurrence of @little in @big, otherwise return (NULL);
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	n;

	if (*little == 0)
	{
		return ((char *)big);
	}
	n = ft_strlen(little);
	if (len == 0)
		return (NULL);
	while (*big && n <= len)
	{
		if (*big == *little && ft_strncmp(big, little, n) == 0)
		{
			return ((char *)big);
		}
		++big;
		--len;
	}
	return (NULL);
}

/*
int main()
{
	char	big[] = "Hello, user how are you ?!";
	char	little[] = "how";

	ft_putendl_fd(ft_strnstr(big, little, ft_strlen(big)), 1);
	return (0);
}
*/
